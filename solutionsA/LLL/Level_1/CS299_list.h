//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;


// The data structure is a linear linked list of integers
struct node
{
    int data;
    node * next;
};

// These functions are already written and used by main
void build(node * & head);      //supplied
void display_all(node * head);  //supplied
void destroy(node * &head);     //supplied


/* *****************YOUR TURN! ******************************** */
/* PLACE YOUR PROTOTYPE HERE */

int all_sum(node * head);
int sum_lrg_lst(node * head);

// display all items in the LLL that do not match the first node’s data
// return the number of data items displayed

// sum all of the data that is larger than the last node’s data
// add a new node at the end with this sum. Return the sum calculated
int display_nonlast(node * head);

// find out if the LAST two numbers appear more than once and return True if so
int last_two_more_than_once(node *);


// remove the last item from a linear linked list
// return the data from that last node. Return zero if there are no data items
int remove_last(node *);

// remove all items from a linear linked list except for the first and last node
int remove_all_but_firstLast(node *);


// copy the data at the last node and insert it at the beginning of the linear
// linked list (inserting a new node)
// Return the value of the NEW last node
int insert_last_as_first(node *);
