//arr.h
#include <iostream>
#include <cstring>
#include <cctype>

const int SIZE = 5;	//size of the array of head pointers

struct node
{
    int data;
    node * next;
};


/* These functions are already written and can be called to test out your code */
void build(node * head[]);  //supplied
void display_all(node * head[]);  //supplied
void destroy(node * head[]); //supplied

/* *****************YOUR TURN! ******************************** */
//Write your function prototype here:

//Display all data except the last node recursively. Return the number of nodes displayed.
int display_not_last(node * head[]);
int display_not_last(int num, int & count, node * head[]);
void display_not_last(int &, node *);

// Remove the entire last LLL from the array of LLL and return the number of items removed.
int remove_last_LLL(node * head[]);
void remove_last_LLL(int & count, node *&);

// Add a new node to the end of each LLL; it should have the same value as the first node
// in that LLL. Return the number of nodes added.
