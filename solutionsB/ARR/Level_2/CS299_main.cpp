#include "CS299_arr.h"
//Please place your name here:
//
//
using namespace std;

int main()
{
    int num = 0;
    node * head[SIZE] = {0,0,0,0,0};
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the functions
    
    //cout << "\nAll of the data stored in this array of LL..." <<endl;
    //cout << "There are " << display_not_last(head) << " total nodes." <<endl;

    cout << "\nRemoving the full contents of the last LLL..." << endl;
    num = remove_last_LLL(head);
    cout << num << " nodes were removed." << endl << endl;

    display_all(head);
    destroy(head);
    
    return 0;
}
