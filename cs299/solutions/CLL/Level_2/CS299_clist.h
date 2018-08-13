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

//Remove all nodes in a CLL. Returning the number of nodes removed.

//Count all even data within a CLL recursicvely. Return the count.

//Add a new node prior to the rear of a CLL but only if the data doesn’t already exist in the CLL.

//Make a complete and duplicate copy of a CLL; return if the new list has any data in it (true) or not (false)
