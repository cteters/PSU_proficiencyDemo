#include "CS299_dlist.h"


//remove every other item from a DLL and return the number
// of items removed
int remove_every_other(node * head)
{
    int count = 0;
    if(!head)
        return count;

    remove_every_other(count, false, head);
    
    return count;
}

void remove_every_other(int & count, bool other, node *& head)
{
    if(!head)
        return;

    other ? other = false : other = true;

    if(!other){
        node * temp = head;
        if(head -> next){
            head = head -> next;
            head -> previous = temp -> previous;
        }
        else
            head = NULL;
        delete temp;
        temp = NULL;
        count++;
        remove_every_other(count, other, head); 
    }
    else
        remove_every_other(count, other, head -> next); 

}


// duplicate every item that is a ‘2’ in the list
// return the number of items duplicated and place the new
// nodes immediately after the previous ‘2’
int duplicate_two(node * head)
{
    int count = 0;
    if(!head)
        return count;

    duplicate_two(count, head);    
    
    return count;
}

void duplicate_two(int & count, node *& head)
{
    if(!head)
        return;

    if(head -> data == 2){
        count++;
        node * temp = new node;
        temp -> data = 99;
        temp -> previous = head;
        temp -> next = head -> next;
        head -> next = temp;
        if(temp -> next){
            temp -> next -> previous = temp;
            duplicate_two(count, head -> next -> next);
        }
        else
            return;
    }
    else
        duplicate_two(count, head -> next);
}
