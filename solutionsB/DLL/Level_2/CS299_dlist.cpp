#include "CS299_dlist.h"


//Swap the last two nodes in a DLL, returning the sum of the data in these two nodes.
int swap_last_two(node * head)
{
    int sum = 0;
    if(!head || !head -> next)
        return sum;

    swap_last_two(sum, head);

    return sum;
}

void swap_last_two(int & sum, node *& head)
{
    if(!head)
        return;
    
    //Version 2
    if(!head -> next){
        //do a thing
        node * front;
        node * back;

        back = head;
        front = head -> previous;

        back -> next = front;
        back -> previous = front -> previous;
        back -> previous -> next = back;

        front -> next = NULL;
        front -> previous = back;
        
        sum = front -> data + back -> data;
        return;
    }

    /*This version only swapped data, not nodes
    if(!head -> next){
        //make the swap
        int numA, numB;
        numA = head -> data;
        numB = head -> previous -> data;
        head -> data = numB;
        head -> previous -> data = numA;
        sum = numA + numB;
        return;
    }*/

    else
        swap_last_two(sum, head -> next);
}

//Display the contents of the DLL in reverse; return the last node’s data item (the first to be displayed ) and that again from main.
int display_reverse(node * head)
{
    int num = 0;
    if(!head)
        return num;
    if(!head -> next){
        num = head -> data;
        display_rev(head);
        return num;
    }
    display_reverse(head -> next);
}

void display_rev(node * head)
{
    if(!head -> previous){
        cout << head -> data << endl <<endl;
        return;
    }

    cout << head -> data << " -> ";
    display_rev(head -> previous);
}
