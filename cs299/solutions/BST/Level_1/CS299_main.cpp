#include "CS299_bst.h"

int main()
{
    node * root = NULL;
    build(root);
    display_all(root);

    /*  PLACE YOUR FUNCTION CALL HERE */
    int num;
    num = greater_than_root(root);
    cout << "The number of items greater than root are ";
    cout << num << endl;

    int sum = 0;
    cout << "The sum of all leafs is " << leaf_sum(sum,root) << "." <<endl;

    cout << "The height of the tree is " << getHeight(root) << "." <<endl;

    cout << "Root's inorder successor is " << root_inorder_s(root) << ".\n";

    cout << "making a copy of tree.." <<endl;
    node * cpy;
    copy(root, cpy);
    cout << "The copy reads:" <<endl;

    display_all(cpy);
    cout << "\nDeleteing the copy..." <<endl;
    dealocate(cpy);
    display_all(cpy);



    destroy(root);
    destroy(cpy);
    return 0;
}
