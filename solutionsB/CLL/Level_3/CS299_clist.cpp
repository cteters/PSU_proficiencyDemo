#include "CS299_clist.h"

int list :: add_node_if_even()
{
    int count = 0;
    if(!rear)
        return count;

    node * hold = rear;
    add_node_if_even(count, rear -> next, hold);
    
    return count;
}

void list :: add_node_if_even(int & count, node *& head, node * hold)
{
    if(head == hold)
        return;

    if(head -> next -> data % 2 == 0){
        count++;
        //add a node before even node
        node * temp = new node;
        temp -> next = head -> next;
        temp -> data = 999;
        head -> next = temp;
        add_node_if_even(count, temp -> next, hold);
    }
    else
        add_node_if_even(count, head -> next, hold);
}


int list :: remove_like_rear()
{
    int count = 0;
    if(!rear)
        return count;

    node * hold = rear;
    remove_like_rear(count, rear -> next, hold);
    return count;
}

void list :: remove_like_rear(int & count, node *& head, node * hold)
{
    if(head == hold)
        return;

    if(head -> data == hold -> data){
        count++;
        //delete stuff
        node * temp = head;
        head = head -> next;
        delete temp;
        temp = NULL;
    }

    remove_like_rear(count, head -> next, hold);
}
