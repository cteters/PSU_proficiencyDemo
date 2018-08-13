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
 
//Count the number of nodes with data greater than the root’s data in a BST
int greater_than_root(node*);
int greater_than_root(int & count, int num, node*root);

//Calculate the sum of every leaf’s data (nodes that have no children) in a BST, return the result.
int leaf_sum(int&,node*);

//Traverse the tree to determine the height.
int getHeight(node*);

//Find the root’s inorder successor and return that item’s data to main.
int root_inorder_s(node*);

//Make a complete copy of a BST, creating a new BST  
void copy(node*, node*&);

//Deallocate all nodes in a BST
void dealocate(node *& root);


