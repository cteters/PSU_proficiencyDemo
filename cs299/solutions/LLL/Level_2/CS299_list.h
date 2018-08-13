//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;


//The data structure is a linear linked list of integers
struct node
{
    int data;
    node * next;
};

//These functions are already written and used by main
void build(node * & head);      //supplied
void display_all(node * head);  //supplied
void destroy(node * &head);     //supplied


/* *****************YOUR TURN! ******************************** */
/* PLACE YOUR PROTOTYPE HERE */

//Check if the requested data (sent in as an argument) is a LLL
bool check_for(int, node*);

//Display every other item, starting with the first. Return the number of items displayed.
int every_other(int, node*);

//Add a node JUST BEFORE the last node of a LLL and return the data in the last node
int add_before_last(int, node*&);

//Remove all items (there is no “node” destructor). Return the number of items removed.

//Remove everything except the first and the last node. Return the sum of the data removed.
int remove_not_first_last(node*& head);
int remove_not_first_last(int, node*&);

//Make a complete copy of a LLL and return the number of items copied.
int make_a_copy(node *& head, node *& cpy);
int make_a_copy(int, node *&, node *&);

