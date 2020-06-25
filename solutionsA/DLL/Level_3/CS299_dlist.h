//doubly linked list
//Notice that there is a head and a tail pointer!!!
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;


struct node
{
    int data;		//some questions use a char * data;
    node * previous;
    node * next;
};

class list
{
    public:
        //These functions are already written
        list();         //supplied
        ~list();        //supplied
        void build();   //supplied
        void display(); //supplied
        
        int copy_nonDupe(list &);
        int add_ave_node();

     /* *****************YOUR TURN! ******************************** */
     /* place your prototype here */
     
     private:
         node * head;   //notice there is both a head
         node * tail;   //and a tail, common for DLL
         
        int add_ave_node(node *&, int&, int&);

        int copy_nonDupe(node *);
        int copy_nonDupe(node * head, node * current, node *& cpy, int & count);
        int duplicate_check(node * head, node * current, node *& cpy, bool &, int&);
        void add_node(node * head, node *& copy, node * copyPrev);
};

// display the last two items in the list, in reverse order
// return the sum of the last two data items.

// return zero if the list is empty

// return just the data in the node if there is only one node

// remove the last two items in the list

// remove the last two items in the list, regardless of their data value

// return the total number of items in the list, after the remove has taken place

// return zero if the list is empty

// remember to set the new last node’s next pointer to NULL

// add a node to the end of the list that contains the average of the list
// perform this with a single traversal. Return the average to main

// remove the nodes with the largerst two data items in a single traversal
// return the sum of the data in these two nodes
