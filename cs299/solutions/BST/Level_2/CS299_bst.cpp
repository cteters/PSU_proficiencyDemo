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



//Remove selected value and return true if so
bool remove_value(int target, node*& root, node*& value)
{
    if(!root){
        value = NULL;
        return false;
    }
    else if(root -> data == target){
        remove_node(root);
        return true;
    }
    //CASE: go left
    else if(root -> data > target){
        cout << "do a thing" << endl;
        //remove_value(target, root -> left, value);
        //return false;??

    //CASE: go right
    }else{
        node * temp = root;
        remove_value(target, temp -> right, value);
        root = temp;
    }

    return false;

}


void remove_node(node *& root)
{
    if(!root)
        return;

    //CASE: leaf
    if(!root -> right && !root -> left){
        delete root;
        root = NULL;
        return;
    }

    //CASE: 1 child
    else if( (root-> left && !root -> left) ||
            (!root -> left && root -> right)){

        if(root -> left)
            cout << " delete this later " <<endl;
           // node_connect = root -> left;
        else{
           // node_connect = root -> left;
           // delete nodePtr;
           // nodePtr = NULL;
           // return;
        }

    //CASE: 2 child
    }else{
        //tempPtr = remove_left_most(root -> right, newNodeVal)
        //nodePtr -> setRightChildPtr(tempPtr);
        //nodePtr -> setItem(newNodeVal)
        //return nodePtr

    }
}

//void remove_left_most(node *& root, int & inorder_successor)
//{
    //if(!root -> left){
    //  inorder_successor = root -> data;
    //  return remove_node(root);
    //}else
    //  return remove_left_most(root -> left, inorder_successor);

//}

/**
//PUBLIC METHOD
bool remove(int target, node *& root)
{
    bool success = false;
    node * value = NULL;
    success = remove_value(target, root, value);
    return success;
}
**/

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


//OLDER WORKING CODE
bool remove(int num, node * root)
{
    if(!root)
        return false;

    node * hold;
    if(num == root -> data){

        //CASE: no leaf
        if(!root -> left && !root -> right){
            hold = root;
            delete hold;
            root = NULL;
        }
        else if(root -> left && !root -> right){
            hold = root -> left;
            root-> left = hold -> left;
            delete root;
            root = hold;
        }
        else if(!root -> left && root -> right){
            hold = root -> right;
            root -> right = hold -> right;
            delete root;
            root = hold;
        }
    } else {
        if(root -> right)
            remove_right(num,root);
    }

    if(root){
        if(num < root -> data)
            remove(num, root -> left);
        else
            remove(num, root -> right);
    }

    return true;
}

void remove_right(int num, node * root)
{
    node * hold = root -> right;
    if(num == root -> data){
        if(!hold -> left){
            root -> right = hold -> right;
            delete hold;
            hold = NULL;
        }
        else if (hold -> right && hold -> left){
            node * current = hold;
            node * parent = NULL;
            while(current -> left){
                parent = current;
                current = current -> left;
            }
            if(parent)
                parent -> left = current -> right;
            node * temp = root -> right;
            current -> right = hold -> right;
            current -> left = hold -> left;
            root -> right = current;
            delete temp;
            temp = NULL;
        }
    }
}





