#include "CS299_bst.h"


//Display the largest item in a BST
int get_largest(node * root)
{
    if(!root)
        return 0;

    int num = 0;
    return get_largest(num, root);

}


int get_largest(int & num, node * root)
{
    if(!root)
        return num;

    if(num < root -> data)
        num = root -> data;

    get_largest(num, root-> left);
    get_largest(num, root-> right);

    return num;
}


//Count the number of times the root’s data appears in the list. Return the count and display it from main
int count_root(node * root)
{
    if(!root)
        return 0;

    int count = 0;
    int num = root -> data;
    return count_root(count, num, root);

}

int count_root(int& count, int num, node* root)
{
    if(!root)
        return count;

    if(root -> data == num)
        count++;

    count_root(count, num, root -> left);
    count_root(count, num, root -> right);

    return count;

}

int count_leafs(node* root){
    int count = 0;
    return count_leafs(count, root);
}

int count_leafs(int & num, node* root)
{
    if(!root)
        return num;

    if(!root -> left && !root -> right)
        num++;

    count_leafs(num, root -> left);
    count_leafs(num, root -> right);

    return num;

}

int remove_inorder_successor(node *& root)
{
    int num = 0;
    if(!root)
        return num;

    remove_inorder_successor(num, root);

    return num;
}

void remove_inorder_successor(int & num, node *& root)
{
    if(!root)
        return;

    //No children
    if(!root -> right && !root -> left){
        cout << "deleteing root" <<endl;
        num = root -> data;
        delete root;
        root = NULL;
        return;
    }
    //No value right
    else if(!root -> right){
        cout << "deleting left leaf" <<endl;
        node * temp = root -> left;
        root -> left = temp -> left;
        root -> right = temp -> right;
        num = temp -> data;
        delete temp;
        temp = NULL;
        return;
    }
    else{
        //go right once
        node * shift = root -> right;
        node * inorderS = shift;
        //go all the way left
        traverse_left(shift, inorderS);
        num = inorderS -> data;
        //make right child the child for parent
        if(inorderS -> right){
            cout << "deleting IOS w/ right leaf" << endl;
            node * temp = inorderS -> right;
            inorderS -> right = temp -> right;
            inorderS -> left = temp -> left;
            inorderS -> data = temp -> data;
            delete temp;
            temp = NULL;
            return;
        }
        else{
            cout << "deleting IOS w/o right leaf " << endl;
            shift = root -> right;
            remove_left(shift, inorderS);
        }
    }

}

void traverse_left(node *& root, node *& hold)
{
    if(!root -> left){
        hold = root;
        return;
    }
    traverse_left(root -> left, hold);
}

void remove_left(node *& root, node * target)
{
    if(!root)
        return;

    remove_left(root -> left, target);
    if(root == target){
        node * temp = root;
        delete temp;
        root = temp = NULL;
    }
}

void copy_not_root(node * root, node *& cpy)
{
    node * hold = root;
    copy_not_root(root, cpy, hold);

}
void copy_not_root(node * root, node *& cpy, node * hold)
{
    if(!root)
        return;

    if(root != hold)
        copy_data(cpy, root -> data);

    copy_not_root(root -> left, cpy, hold);
    copy_not_root(root -> right, cpy, hold);
}

void copy_data(node *& root, int num)
{
    if(!root){
        root = new node;
        root -> data = num;
        root -> left = NULL;
        root -> right = NULL;
        return;
    }

    else if(num < root -> data)
        copy_data(root -> left, num);
    else
        copy_data(root -> right, num);
}
