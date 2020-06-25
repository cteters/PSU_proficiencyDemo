#include "CS299_bst.h"



//Remove the largest item from a BST; return the value of the largest item removed.
int table :: remove_largest()
{
    int num = 0;
    if(!root)
        return num;

    node * largest = root;
    num = remove_largest(largest, root);
    remove_node(largest, root);

    return num;
}

int table :: remove_largest(node *& largest, node *& ruut)
{
    if(!ruut)
        return largest -> data;

    if(largest -> data < ruut -> data)
        largest = ruut;

    remove_largest(largest, ruut -> left);
    remove_largest(largest, ruut -> right);
}

void table :: remove_node(node *& largest, node *& ruut)
{
    if(!largest || !ruut)
        return;
    
    if(largest == ruut){
        if(ruut -> left){
            node * temp = ruut -> left;
            delete ruut;
            ruut = temp;
        }
        else{
        delete ruut;
        ruut = NULL;
        }
        return;
    }

    remove_node(largest, ruut -> left);
    remove_node(largest, ruut -> right);
}

int table :: findMax()
{
    int num = 0;
    if(!root)
        return num;

    findMax(num, root);
    return num;
}

int table :: findMax(int & num, node * ruut)
{
    if(!ruut)
        return num;

    if(num < ruut -> data)
        num = ruut -> data;

    int left, right;
    left = right = 0;

    left = findMax(num, ruut -> left);
    right = findMax(num, ruut -> right);

    num = left > right ? left : right; 

    /*
    if(num < left)
        num = left;
    if(num < right)
        num = right;
    */
}


int table :: display_smaller_root()
{
    int count = 0;
    if(!root)
        return count;
    int num = root -> data;

    display_smaller_root(num, count, root);
    cout << endl;
    return count;
}

void table :: display_smaller_root(int num, int & count, node *& ruut)
{
    if(!ruut)
        return;

    if(ruut -> data < num){
        cout << ruut -> data << " -> ";
        count++;
    }
    display_smaller_root(num, count, ruut -> left);
    display_smaller_root(num, count, ruut -> right);
}


int table :: copy_div_two(node *& cpy)
{
    int count = 0;
    if(!root)
        return count;

    copy_div(count, root, cpy);
    return count;
}


void table :: copy_div(int & count, node * ruut, node *& cpy)
{
    if(!ruut)
        return;

    if(ruut -> data % 2 == 0){
        count++;
        add_node(ruut -> data, cpy);
    }

    copy_div(count, ruut -> left, cpy);
    copy_div(count, ruut -> right, cpy);

}

void add_node(int num, node *& root)
{
    if(!root){
        root = new node;
        root -> data = num;
        root -> right = NULL;
        root -> left = NULL;
    }
    else if( root -> data < num)
        add_node(num, root -> left);
    else
        add_node(num, root -> right);

}

void dealocate_nodes(node *& root)
{
    if(!root)
        return;

    dealocate_nodes(root -> left);
    dealocate_nodes(root -> right);

    if(!root -> left && !root -> right){
        delete root;
        root = NULL;
        return;
    }
}

void display_nodes(node * root)
{
    if(!root)
        return;

    cout << root -> data;
//    if(root -> right || root -> left)
        cout << " -> ";

    display_nodes(root -> left);
    display_nodes(root -> right);
}
