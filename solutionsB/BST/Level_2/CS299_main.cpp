#include "CS299_bst.h"
//Please place your name here:
//
//

int main()
{
    int num = 0;
    node * root = NULL;
    build(root);
    display_all(root);

    /*  PLACE YOUR FUNCTION CALL HERE */

    //cout << "The largest value is " << get_largest(root) << "." <<endl;

    //cout << "The root value " << root -> data << " appears ";
    //cout << count_root(root) << " times." <<endl;

    cout << "The number of leafs in the tree is ";
    cout << count_leafs(root) << "." << endl << endl;

    cout << "Removing root's inorder successor..." << endl;
    num = remove_inorder_successor(root);
    cout << "The value of the inorder successor was ";
    cout << num << endl << endl;

    cout << "Making a complete copy, excluding root..." <<endl;
    node * cpy = NULL;
    copy_not_root(root, cpy);
    cout << "The copied list:" << endl;
    display_all(cpy);

    destroy(root);
    destroy(cpy);

    return 0;
}
