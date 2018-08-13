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
 
//Display the largest item in a BST
int get_largest(node * root);
int get_largest(int & num, node * root);

//Count the number of times the root’s data appears in the list. Return the count and display it from main
int count_root(node *);
int count_root(int&,int,node*);

//Remove the root’s inorder successor. DO NOT USE ANY LOOPS!!! Return the data for the inorder successor to main.

//Make a complete copy of a binary search tree, exclude the root of the original tree.  

//Remove selected value and return true if so
//bool remove(int target, node *& root);
bool remove_value(int, node*&);
bool remove_value(int, node*&, node*&);
void remove_node(node *&);
void remove_left_most(node*&, int&);

int count_leafs(node*);
int count_leafs(int&, node*);


bool remove(int num, node * root);
void remove_right(int num, node * root);
