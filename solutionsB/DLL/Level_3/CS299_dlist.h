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

//Display the last two items in the list, in reverse order.
//Return the sum of the last two data items.

//Return zero if the list is empty.

//Return just the data in the node if there is only one node.

//Remove the last two items in the list.

//Remove the last two items in the list, regardless of their data value.

//Return the total number of items in the list, after the remove has taken place.

//Return zero if the list is empty.

//Remember to set the new last node’s next pointer to NULL.

//Add a node to the end of the list that contains the average of the list. Perform this with a single traversal. Return the average to main.

//Remove the nodes with the largerst two data items in a single traversal; return the sum of the data in these two nodes.
