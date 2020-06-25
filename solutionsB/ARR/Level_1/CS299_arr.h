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

//Remove the last item in each LLL. Return the number of items removed.
int remove_last(node * head[]);
void remove_last(node *& head);

//Add a node to the end of the last LLL. Return the number of nodes in that LLL.
int add_at_end_last(node * head[]);
void add_at_end_last(int&, node *&);

//Deallocate the entire LLL of arrays. Return the number of items removed.
int deallocate_all(node * head[]);
void deallocate_all(int & count, node *& head);

//Rewrite the function to deallocate the entire LLL of arrays. Return the number of items removed. THIS TIME use pointer arithmetic!
int deallocate_all_v2(node * head[]);
void deallocate_all_v2(int & count, node *& head);

