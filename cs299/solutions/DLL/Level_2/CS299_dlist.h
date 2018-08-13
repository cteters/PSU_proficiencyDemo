//doubly linked list
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    node * previous;
    node * next;
};

/* These functions are already written and can be called to test out your code */
void build(node * & head);  //supplied
void display_all(node * head);  //supplied
void destroy(node * &head); //supplied

/* *****************YOUR TURN! ******************************** */
/* place your prototype here */

//Swap the last two nodes in a DLL, returning the sum of the data in these two nodes.
int swap_last_two(node*);
void swap_last_two(int &, node*&);

//Display the contents of the DLL in reverse; return the last node’s data item (the first to be displayed ) and that again from main.
int display_reverse(node*);
void display_rev(node*);

//Add a new node to the end of a DLL, but only if the data doesn’t already exist in the DLL. Consider efficiency and stop traversal early if possible.

//Make a complete and duplicate copy of a DLL; return if the new list has any data in it (true) or not (false).
