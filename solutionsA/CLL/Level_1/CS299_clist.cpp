#include "CS299_clist.h"


int display_not_last(node * rear)
{
    int sum = 0;
    if(!rear)
        return sum;

    sum += rear -> data;
    node * hold = rear;

    cout << "The full CLL list:" <<endl;

    rear = rear -> next;
    cout << rear -> data << " -> ";

    while(rear != hold){
        sum += rear -> data;
        rear = rear -> next;
        cout << rear -> data << " -> ";
    }

    return sum;
}



bool remove_last(node*& rear)
{
    if(!rear)
        return false;

    node * hold = rear;
    if(rear -> next == hold){
        rear -> next = rear;
        delete hold;
        return true;
    }

    while(rear -> next != hold){
        rear = rear -> next;
    }
    rear -> next = hold -> next;
    delete hold;

    return true;
}


int make_copy(int count, node*& rear, node*& cpy)
{
    if(!rear)
        return count;

    node * hold = rear;
    node * temp;
    cpy = new node;
    cpy -> data = rear -> data;
    cpy -> next = rear -> next;
    count++;

    if(rear -> next == hold)
        return count;

    do{
       node * temp = new node;
       temp -> data = rear -> data;
       cpy -> next = temp;
       temp -> next = rear -> next;
       count++;
       rear = rear -> next;
    }while(rear -> next != hold);

    return count;
}

void display_CLL(node * rear)
{
    node * hold = rear;
    cout << "The cpy CLL contains " << endl;



    do{
        cout << rear -> data << " -> ";
        rear = rear -> next;

    }while(rear -> next != hold);

}
