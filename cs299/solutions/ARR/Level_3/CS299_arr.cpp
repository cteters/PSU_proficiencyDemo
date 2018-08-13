#include "CS299_arr.h"

using namespace std;


void table :: display_reverse()
{
    if(!head)
        return;

    for(int i = size; i > 0; i--){
        cout << "\nList #" << i << ": ";
        display_reverse(head[i -1]);
        cout << endl;
    }

}


void table ::  display_reverse(node * head)
{
    if(!head)
        return;

    display_reverse(head -> next);
    cout << head -> data << " -> ";
}


//Average all of the data in an array of LLL. Display the result in main. Return the average.
int table :: average()
{
    int ave, count;
    ave = count = 0;

    //if(!head)
    //   return ave;
    if(head){
        for(int i = 0; i < size; i++)
            average(ave, count, head[i]);
        ave = ave / count;
    }
    
    return ave;

}


void table :: average(int & ave, int & count, node * head)
{
   // if(!head)
   //     return;
    
    if(head){
        count++;
        ave += head -> data;
        average(ave, count, head -> next);
    }

    return;
}
 
//Make a complete copy of an array of LLL. Return the number of items copied.
int table :: copy(node **& cpy)
{
    int count = 0;
    if(!head)
        return count;

    if(!cpy){
        cpy = new node*[size];
        for(int i = 0; i < size; i++)
            cpy[i] = NULL;
    }

    for(int i = 0; i < size; i++)
        copy(count, head[i], cpy[i]);

    return count;
}

void table :: copy(int & count, node * head, node *& cpy)
{
    if(!head)
        return;
    
    if(!cpy)
        cpy = new node;
    cpy -> data = head -> data;
    cpy -> next = NULL;
    count++;

    copy(count, head -> next, cpy -> next);
}

int table :: getSize(){
    return size;
}

void disp(int size, node ** head)
{
    if(!head)
        return;

    table temp;
    for(int i = 0; i < size; i++){
        cout << "list " << i << ": ";
        disp(head[i]);
        cout << endl;
    }

    cout << endl;
}

void disp(node * head)
{
    if(!head)
        return;

    cout << head -> data;
    if (head -> next)
        cout << " -> ";
    else
        cout << endl;
    disp(head -> next);
}

void dealocate(int size, node ** head)
{
    if(!head)
        return;

    table temp;

    for(int i = 0; i < size; i++){
        dealocate(head[i]);

    }
    delete head;
}

void dealocate(node * head)
{
    if(!head)
        return;

    dealocate(head -> next);
    delete head;
    head = NULL;

}

int table :: remove_not_first_last ()
{
    int count, index;
    count = index = 0;
    if(!head)
        return count;

/*  looped version
    for(int i = 0; i < size; i++){
        if(head[i] -> next)
        remove_not_first_last(head[i] -> next, count);
    }
*/
    remove_not_first_last(index, count);
    

    return count;
}


void table :: remove_not_first_last(int & index, int & count)
{
    if(!head[index] || index == size)
        return;

    remove_not_first_last(head[index] -> next, count);

    index++;

    remove_not_first_last(index, count);

}


void table :: remove_not_first_last (node *& head, int & count)
{
    if(!head)
        return;

    if(head -> next){
        node * temp = head;
        head = head -> next;
        delete temp;
        temp = NULL;
        count++;

        remove_not_first_last(head, count);
    }
}

int table :: copy(table & cpy)
{
    int count = 0;
    if(!head)
        return count;


    return count;

}

void table :: copy(node *& cpy, node * head, int & count)
{
    if(!head)
        return;



}
