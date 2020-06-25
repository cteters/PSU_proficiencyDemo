//clist.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;
    node * next;
};

/* These functions are already written and can be called to test out your code */
void build(node * & rear);  //supplied
void display_all(node * rear);  //supplied
void destroy(node * & rear); //supplied

/* *****************YOUR TURN! ******************************** */
//Write your function prototype here:

// display all data except the last node’s data item
// return the sum of data items displayed.
int display_not_last(node*);

// remove the “last” node in a CLL (pointed to by rear)
// return whether or not this was successful.
bool remove_last(node*&);

// make a copy of a CLL
// return the number of items copied
int make_copy(int, node*&, node*&);
void display_CLL(node*);
