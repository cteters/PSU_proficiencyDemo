#include "CS299_list.h"


// calculate the average of e very data item in a LLL and return the average using
// a single traversal.
double list :: average()
{
    if(!head)
        return 0;

    double ave =0;
    int count =0;

    average(ave, count, head);

    ave = ave/count;

    return ave;

}


void list :: average(double & ave, int & count, node*head)
{
    if(!head)
        return;
    count++;
    ave += head -> data;

    average(ave,count,head -> next);
}



// add a node (with the data value 99) after each node that has a data value LARGER
// than the last node’s data using a single traversal. Return the number of times 99
// is added into the list. DO NOT RE-TRAVERSE!
int list :: add_99()
{
    if(!head)
        return 0;

    if(head -> next)
        return add_99(0, head,head->next);
    else
        return 0;
}


int list :: add_99(int count, node*& prev, node*& curr)
{
    if(!curr)
        return count;

    if(prev -> data < curr -> data) {
        node * temp = new node;
        temp -> data = 99;
        temp -> next = curr -> next;
        curr -> next = temp;
        count++;
    }


    return add_99(count, prev -> next, curr -> next);
}

// copy all even data that exists in a LLL and build a new LLL. Return the number
// of items in a new LLL (without retraversing!).
int list :: copy_all_even()
{
    if(!head)
        return 0;

    int count = 0;
    node * cpy;

    count = copy_all_even(count, head, cpy);
    cout << "All of the even nodes copied are ";
    display_nodes(cpy);
    destroy_nodes(cpy);

    return count;
}


int list:: copy_all_even(int count, node *& head, node *& cpy)
{
    if(!head)
        return count;

    if((head -> data % 2) == 0){
        cpy = new node;
        cpy -> data = head -> data;
        cpy -> next = NULL;
        //make a copy
        count++;
        return copy_all_even(count, head -> next, cpy -> next);
    }
    else
        return copy_all_even(count, head -> next, cpy);
}

void list :: display_nodes(node * curr)
{
    if(!curr)
        return;

    cout << curr -> data << " -> ";

    display_nodes(curr -> next);
}


void list :: destroy_nodes(node *& head)
{
    if(!head)
        return;

    destroy_nodes(head -> next);
    delete head;
    head = NULL;


}


int list :: remove_except()
{
    if(!head)
        return 0;

    return remove_except(head, tail);
}

int list :: remove_except(node *& head, node *& tail)
{
    int count = 0;

    remove_except(head, count);

    head = tail;

    return count;

}
void list ::remove_except(node *& head, int& count)
{
    if(!head)
        return;

/*    if(head -> next){
        node * temp = head;
        delete temp;
        temp = NULL;
        count++;
        head = head -> next;
        remove_except(head, count);
    }
    else 
        return;
*/
    if(head -> next -> next)
        remove_except(head -> next, count);

        delete head;
        head = NULL;
        count++;

}


int list :: countNodes()
{
    return countNodes(head);
}

int list :: countNodes(node * head)
{
    if(!head)
        return 0;

    return countNodes(head -> next) +1;
}
