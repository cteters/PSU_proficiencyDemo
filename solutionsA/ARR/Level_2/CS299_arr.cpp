#include "CS299_arr.h"
using namespace std;


// Display all data except the last node recursively. Return
// the number of nodes displayed.
int display_not_last(node * head[])
{
    if(!head[0])
        return 0;

    int count = 0;
    display_not_last(0, count, head);

    return count;
}

int display_not_last(int num, int & count, node * head[])
{
    if(num > SIZE -1)
        return count;
    
    cout << "List #" << num << ": ";
    display_not_last(count, head[num]);
    cout << endl <<endl;

    num++;
    display_not_last(num, count, head);

    return count;
}

void display_not_last(int & count, node * head)
{
    if(!head)
        return;

    cout << head -> data;
    if(head -> next)
        cout << " -> ";

    count++;
    display_not_last(count, head -> next);

}

//Remove the entire last LLL from the array of LLL and return
// the number of items removed.
int remove_last_LLL(node * head[])
{
    int count = 0;
    if(!head)
        return count;

    remove_last_LLL(count, head[SIZE -1]);
    return count;
}

void remove_last_LLL(int & count, node *& head)
{
    if(!head)
        return;

    remove_last_LLL(count, head -> next);
    count++;
    delete head;
    head = NULL;
}
