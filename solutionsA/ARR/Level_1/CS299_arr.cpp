#include "CS299_arr.h"


// Remove the last item in each LLL. Return the number of
// items removed.
int remove_last(node * head[])
{
    int count = 0;
    for(int i = 0; i < SIZE; i++){ 
        if(head[i])
            remove_last(head[i]);
        count++;
    }
    return count;
}


void remove_last(node *& head)
{
    if(!head)
        return;

    if(!head -> next){
        delete head;
        head = NULL;
        return;
    }

    remove_last(head -> next);

}


// Add a node to the end of the last LLL. Return the number
// of nodes in that LLL.
int add_at_end_last(node * head[])
{
    int count = 0;

    add_at_end_last(count, head[SIZE -1]);

    return count +1;
}


void add_at_end_last(int & count, node *& head)
{
   if(!head){
       head = new node;
       head -> next = NULL;
       head -> data = 99999;
       return;
    }
   count++;
   add_at_end_last(count, head -> next);

}


// Deallocate the entire LLL of arrays. Return the number of
// items removed.
int deallocate_all(node * head[])
{
    int count = 0;
    if(!head[0])
        return count;
    
    for(int i = 0; i < SIZE; i++){ 
        if(head[i])
            deallocate_all(count, head[i]);
    }
    return count;

}

void deallocate_all(int & count, node *& head)
{
    if(!head)
        return;

    deallocate_all(count, head -> next);
    count++;
    delete head;
    head = NULL;

}

int deallocate_all_v2(node * head[])
{
    int count = 0;
    node * curr;
    if(!head[0])
        return count;

    curr = head[0];

    for(int i = 0; i < SIZE; i+=2)
        if(curr + i)
            count++;


    return count;
}

void deallocate_all_v2(int & count, node *& head)
{
    if(!head)
        return;

    deallocate_all_v2(count, head -> next);
    count++;
    delete head;
    head = NULL;
}
