#include "CS299_arr.h"
//Please place your name here:
//
//
using namespace std;

int main()
{
    node * head[SIZE] = {0,0,0,0,0};
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the functions

//    cout << "Removing the last node of each list..." <<endl;
//    cout << remove_last(head) << " nodes were removed." <<endl;


    cout << "Adding a large value to the end of the last LL..." << endl;
    cout << "There are now " << add_at_end_last(head) << " nodes." <<endl;

    cout << "Removing the full array of linked lists..." <<endl;
    cout << deallocate_all_v2(head) << " nodes were removed." <<endl;

    display_all(head);
    destroy(head);
    
    return 0;
}
