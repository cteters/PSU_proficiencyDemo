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
    cout << endl;
    cout << "Swapping the last two nodes..." <<endl;
    cout << "The sum of the last two nodes is " << swap_last_two(head);
    cout << "." << endl << endl;

    cout << "The list in reverse order:" <<endl;
    int num = display_reverse(head);
    cout << "The last node has a value of " << num << "." <<endl <<endl;

    display_all(head);
    destroy(head);    
    return 0;
}
