#include "CS299_dlist.h"
//Please place your name here:
//
//
using namespace std;


int main()
{
    list object;
    object.build();
    object.display();

    //PLEASE PUT YOUR CODE HERE to call the functions
    list cpy;

    
    cout << "\nAttempting to make a copy of the DLL w/o duplicates..." <<endl;
    cout << object.copy_nonDupe(cpy) << " duplicate nodes made." << endl;

    


    cout << "The copied list with out duplicates is:" <<endl;
    cpy.display();

    cout << "Adding a node to the end that is the average value of all nodes..." << endl;

    cout << "The value added is " << object.add_ave_node() << endl;
    object.display();

    return 0;
}
