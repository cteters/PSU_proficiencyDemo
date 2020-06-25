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

// remove every other item from a DLL and return the number of items removed
int remove_every_other(node *);
void remove_every_other(int & count, bool, node *&);

// duplicate every item that is a ‘2’ in the list
// return the number of items duplicated and place
// the new nodes immediately after the previous ‘2’
int duplicate_two(node *);
void duplicate_two(int &, node *&);
