#include "CS299_list.h"


//Check if the requested data (sent in as an argument) is a LLL
bool check_for(int num, node* head)
{
    if(!head)
        return 0;

   if(head -> data == num)
       return 1;
   else
       check_for(num, head ->next);

    return 0;
}



//Display every other item, starting with the first. Return the number of items displayed.
int every_other(int num, node* head)
{
    if(!head)
        return num;
    else if(!head -> next){
        cout << head -> data;
        num++;
        return num;
    }
    else if(head -> next -> next)
        cout << head -> data << " -> ";
    else
        cout << head -> data;
    num++;
    
    return every_other(num, head -> next -> next);
}


//Add a node JUST BEFORE the last node of a LLL and return the data in the last node
int add_before_last(int num, node *& head)
{
    if(!head)
        return 0;

    if(!head -> next){
        node * curr = new node;
        node * last = new node;
        last = head;
        curr -> next = last;
        curr -> data = num;
        head = curr;
        return last -> data;
    }

    return add_before_last(num, head -> next);
}

int make_a_copy(node *& head, node *& cpy)
{
    if(!head)
        return 0;

    return make_a_copy(0, head, cpy);
}

int make_a_copy(int count, node *& head, node *& cpy)
{
    if(!head)
        return count;
    cpy -> data = head -> data;
    cpy -> next = head -> next;
    if(head -> next)
        cpy -> next = new node;
    count++;
    return make_a_copy(count, head -> next, cpy -> next);
}


int remove_not_first_last(node*& head)
{
    if(!head)
        return 0;

    int num;
    node * temp = head;

    num = remove_not_first_last(0, head -> next);

    temp -> next = head;
    head = temp;

    return num;
}

//Remove everything except the first and the last node. Return the sum of the data removed.
int remove_not_first_last(int sum, node*& head)
{
    if(!head || !head->next)
        return sum;

    node * temp = head;
    head = head -> next;
    sum += temp -> data;
    delete temp;

    return remove_not_first_last(sum, head);
}
