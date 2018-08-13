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

//    cout << "The largest value is " << get_largest(root) << "." <<endl;

//    cout << "The root value " << root -> data << " appears ";
//    cout << count_root(root) << " times." <<endl;

//THIS CASE IS BROKEN
//    cout << "Deleteing the inorder successor" <<endl;
//    cout << "The value " << remove_inorder_s(root) << " was removed." <<endl;

    cout << "checking for a specfic value to remove of ";
    cout << "100..." <<endl;

    if(remove(100, root) == true)
        cout << "found and removed the value." <<endl;
    else
        cout << "could not find value." <<endl;

    cout << "The number of leafs in the tree is " << count_leafs(root) << "." <<endl;

    display_all(root);
    destroy(root);

    return 0;
}
