//arr.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;  //some questions are char * data;
    node * next;
};

class table
{
    public:
    /* These functions are already written */
       table();		//supplied
       ~table();	//supplied
       void build();    //supplied
       void display();  //supplied
       int getSize();


    /* *****************YOUR TURN! ******************************** */
    //Write your function prototype here:
    
    /*Display the data in the array of LLL in reverse order, starting
    with the last node in the LLL.*/
    void display_reverse();

    /*Average all of the data in an array of LLL. Display the result
    in main. Return the average.*/
    int average();
    
    /*Make a complete copy of an array of LLL. Return the number of 
    items copied.*/
    int copy(node **& cpy);
    int copy(table&);

    /*Remove all but first and last in each LLL*/
    int remove_not_first_last();

    private:
       node ** head;     //dynamically allocated array
       int size;	 //the array size
       
    void display_reverse(node * head);
    void average(int &, int &, node*);
    void copy(int & count, node * head, node *& cpy);
    void copy(node *&, node*, int&);

    void remove_not_first_last(int & index, int & count);
    void remove_not_first_last(node *&, int &);
};



void disp(int size, node ** );
void disp(node * );
void dealocate(int size, node ** head);
void dealocate(node * head);
