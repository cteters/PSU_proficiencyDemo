//list.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


struct node
{
    int data;   //some questions are a char * data;
    node * next;
};

class list
{
   public:
   //These functions are already written for you
     list();			//supplied
     ~list();			//supplied
    double average();
    int add_99();
    int copy_all_even();
    void build();     		//supplied
    void display();  		//supplied
    int remove_except();

    int countNodes();
    int countNodes(node*);
    
    /* *****************YOUR TURN! ******************************** */
    //Write your function prototype here:
    

    private:		//notice there is both a head and a tail!
      node * head;
      node * tail;

    int add_99(int,node*&,node*&);
    int copy_all_even(int, node*&, node*&);
    void display_nodes(node * curr);
    void destroy_nodes(node *& head);
    void average(double&, int&,node*);
    int remove_except(node *& head, node *& tail);
    void remove_except(node *&, int&);
};


//Calculate the average of e very data item in a LLL and return the average using a single traversal.

//Add a node (with the data value 999) after each node that has a data value LARGER than the last node’s data using a single traversal. Return the number of times 99 is added into the list. DO NOT RE-TRAVERSE!

//Copy all even data that exists in a LLL and build a new LLL. Return the number of items in a new LLL (without retraversing!).
