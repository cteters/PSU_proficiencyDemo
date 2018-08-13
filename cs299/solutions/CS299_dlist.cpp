#include "CS299_dlist.h"


//Wrapper function called with original list
int list :: copy_nonDupe(list & cpy)
{
    if(!head)
        return 0;

    return cpy.copy_nonDupe(head);
}

//Second Wrapper function called with empty DLL
int list :: copy_nonDupe(node * head)
{
    int count = 0;
    if(!head)
        return count;

    copy_nonDupe(head, head, this -> head, count);
    return count;

}

//Primary function that traverses the DLL to be copied
void list :: copy_nonDupe(node * head, node * current, node *& cpy, int & count)
{
    if(! current)
        return;

    bool dupe = false;
    duplicate_check(head, current, cpy, dupe, count);
    
    
    copy_nonDupe(head, current -> next, cpy, count);
}

//Traverses the original DLL from head to see if the node in question
//to be copied is of the same address space of its first occurring value
void list :: duplicate_check(node * head, node * checkCurrent, node *& cpy, bool & firstMatch, int & count)
{
    if(head -> data == checkCurrent -> data)
        firstMatch = true;

    if(!head || firstMatch){
        if(head == checkCurrent){
            add_node(checkCurrent, cpy, cpy);
            count++;
        }
        return;
    }


    duplicate_check(head -> next, checkCurrent, cpy, firstMatch, count);
}

//Simple function that adds a new node to the tail end of the DLL
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
