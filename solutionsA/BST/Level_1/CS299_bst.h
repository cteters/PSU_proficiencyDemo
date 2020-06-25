#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;
    node * left;
    node * right;
};

void build(node * & root);   //supplied
void display_all(node *  root);  //supplied
void destroy(node * & root); //supplied
/* ************** PLACE YOUR PROTOTYPE HERE ***************** */
 
// count the number of nodes with data greater than the root’s data in a BST
int greater_than_root(node*);
int greater_than_root(int & count, int num, node*root);

// calculate the sum of every leaf’s data (nodes that have no children) in a BST, return the result.
int leaf_sum(int&,node*);

// traverse the tree to determine the height.
int getHeight(node*);

// find the root’s inorder successor and return that item’s data to main.
int root_inorder_s(node*);

// make a complete copy of a BST, creating a new BST  
void copy(node*, node*&);

// deallocate all nodes in a BST
void dealocate(node *& root);


