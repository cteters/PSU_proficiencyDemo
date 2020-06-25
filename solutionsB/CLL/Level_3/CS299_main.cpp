#include "CS299_clist.h"
//Please place your name here
//
//

int main()
{
    int num = 0;
    list object;
    object.build();	//builds a circular LL
    object.display();	//displays the list

    //PLEASE PUT YOUR CODE HERE to call the functions

    cout << "\nAdding nodes after even valued data.." <<endl;
    num = object.add_node_if_even();
    cout << num << " nodes were added." << endl << endl;

    cout << "Removing any node equal value to rear..." <<endl;
    num = object.remove_like_rear();
    cout << num << " nodes were removed." << endl << endl;


    object.display(); //resulting list after your function call!
    
    return 0;
}
