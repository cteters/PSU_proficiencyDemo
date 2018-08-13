#include "CS299_bst.h"
//Please place your name here:
//
//

int main()
{
    node * root = NULL;
    build(root);
    display_all(root);

    /*  PLACE YOUR FUNCTION CALL HERE */


    display_all(root);
    destroy(root);

    return 0;
}
