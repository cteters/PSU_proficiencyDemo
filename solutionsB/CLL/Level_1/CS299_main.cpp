#include "CS299_clist.h"
//Your name:
//
//

using namespace std;

int main()
{
    node * rear = NULL;
    build(rear);
    display_all(rear);

    //PLEASE PUT YOUR CODE HERE to call the functions
    cout << "The sum of data is " << display_not_last(rear) <<endl;

    cout << "deleting last node..." <<endl;
    if(remove_last(rear) == true)
        cout << "success!" <<endl;
    else
        cout << "list is empty" <<endl;



    cout << "making a complete copy..." <<endl;
    node * cpy;
    cout << "copied " << make_copy(0, rear, cpy) << " nodes." <<endl;

    display_CLL(cpy); //resulting list after your function call!
    destroy(cpy);

    
    return 0;
}
