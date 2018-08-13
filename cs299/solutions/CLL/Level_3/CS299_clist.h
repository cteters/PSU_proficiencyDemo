//clist.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


struct node
{
    int data;	//some questions are a char * data;
    node * next;
};

class list
{
   public:
   		//These functions are already written
   		list();			//supplied
   		~list();		//supplied
   		void build();	//supplied
   		void display();	//supplied

	/* *****************YOUR TURN! ********************* */
	//Write your function prototype here:


	private:
		node * rear;
};

//Add a node before each node that has “even” data in a CLL, returnign the number of nodes added.

//Remove every node that has the same data as the rear’s data. Do not remove the rear’s node. Perform this recursively. Return if anything was removed (true) or not (false).

//Remove every node that has the same data as the rear’s data. Do not remoeve the rear’s node. Perform this recursively. Return if anything was removed (true) or not (false).

//Switch the first and the last nodes in a CLL (not the data – but reattach the node correctly).

//Make a copy of the last two nodes in a CLL, creating a new list of those two items; return average of these two items.