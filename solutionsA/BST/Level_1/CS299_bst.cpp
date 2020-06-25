#include "CS299_bst.h"


// count the number of nodes with data greater than the
// root’s data in a BST
int greater_than_root(node*root)
{
    if(!root)
        return 0;

    int num = root -> data;
    int count = 0;

   
    count = greater_than_root(count, num, root);

    return count;
}


int greater_than_root(int & count, int num, node*root)
{
    if(!root)
        return count;

    if(root -> data > num) 
        count++;


    greater_than_root(count, num, root -> right);
    greater_than_root(count, num, root -> left);

    return count;

}



int leaf_sum(int & sum, node* root)
{

    if(!root)
        return sum;

    if(!root->left && !root->right)
        sum += root -> data;

    leaf_sum(sum, root -> left);
    leaf_sum(sum, root -> right);

    return sum;


}


// traverse the tree to determine the height.
int getHeight(node* root)
{

    //WORKS
/*    if(!root)
        return 0;
    else
       return 1 + max(getHeight(root -> left),getHeight(root->right));

*/

    if(!root)
        return 0;
    else{
        int hl = getHeight(root -> left);
        int hr = getHeight(root -> right);
        return (hl < hr ? hr : hl) +1;
    }

    //WORKS
/*    if(!root)
        return 0;

    int hl = getHeight(root -> left);
    int hr = getHeight(root -> right);
    return 1 + max(hl,hr);

*/

}


// find the root’s inorder successor and return that item’s
// data to main.
int root_inorder_s(node* root)
{
    if(!root)
        return 0;
   
    if(root->right){
        node * curr = root -> right;
        while(curr -> left){
            curr = curr -> left;
        }
        return curr -> data;
    }
    else
        return root -> left -> data;
}



// make a complete copy of a BST, creating a new BST  
void copy(node* root, node*& cpy)
{
    if(!root)
        return;

    cpy = new node;
    cpy -> data = root -> data;
    cpy -> right = root -> right;
    cpy -> left = root -> left;

    copy(root->left, cpy->left);
    copy(root->right, cpy -> right);

}

void dealocate(node *& root)
{
    if(!root)
        return;

    dealocate(root -> left);
    dealocate(root -> right);
    delete root;
    root = NULL;


}
