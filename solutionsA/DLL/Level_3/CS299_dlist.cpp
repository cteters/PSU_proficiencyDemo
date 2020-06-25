#include "CS299_dlist.h"


// wrapper function called with original list
int list :: copy_nonDupe(list & cpy)
{
    if(head)
        return cpy.copy_nonDupe(head);
    else
        return 0;
}

// second Wrapper function called with empty DLL
int list :: copy_nonDupe(node * head)
{
    int count = 0;
    if(head)
        count = copy_nonDupe(head, head, this -> head, count);
    return count;
}

// primary function that traverses the DLL to be copied
int list :: copy_nonDupe(node * head, node * current, node *& cpy, int & count)
{
    if(current){
        bool dupe = false;
        duplicate_check(head, current, cpy, dupe, count);
        copy_nonDupe(head, current -> next, cpy, count);
    }
    return count;
}

// traverses the original DLL from head to see if the node in question
// to be copied is of the same address space of its first occurring value
int list :: duplicate_check(node * head, node * checkCurrent, node *& cpy, bool & firstMatch, int & count)
{
    if(head -> data == checkCurrent -> data)
        firstMatch = true;

    if(!head || firstMatch){
        if(head == checkCurrent){
            add_node(checkCurrent, cpy, cpy);
            count++;
        }
    }
    else
        duplicate_check(head -> next, checkCurrent, cpy, firstMatch, count);
    return count;
}

// simple function that adds a new node to the tail end of the DLL
void list :: add_node(node * head, node *& copy, node * copyPrev)
{
    if(!copy){
        copy = new node;
        copy -> data = head -> data;
        copy -> next = NULL;
        copy -> previous = copyPrev;
        return;
    }

    copyPrev = copy;
    add_node(head, copy -> next, copyPrev);
}

int list :: add_ave_node()
{
    int total, count;
    total = count = 0;

    if(!head)
        return total;

    add_ave_node(head, total, count);


}

int list :: add_ave_node(node *& head, int & total, int & count)
{
    if(!head){
        head = new node;
        head -> data = total / count;
        head -> next = NULL;
        return total / count;
    }

    total += head -> data;
    count++;

    add_ave_node(head -> next, total, count);
} 
