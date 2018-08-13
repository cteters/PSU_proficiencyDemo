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




    display_all(rear); //resulting list after your function call!
    destroy(rear);
    
    return 0;
}
