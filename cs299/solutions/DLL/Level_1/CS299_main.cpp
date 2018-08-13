#include "CS299_dlist.h"
//Please place your name here
//
//
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the functions

    //cout << "Removing ever other node.." <<endl;
    //cout << remove_every_other(head) << " nodes were removed." << endl <<endl;

    cout << "Duplicating all twos..." <<endl;
    cout << duplicate_two(head) << " twos were duplicated." <<endl <<endl;


    display_all(head);
    destroy(head);    
    return 0;
}
