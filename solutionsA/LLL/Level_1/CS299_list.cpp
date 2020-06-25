#include "CS299_list.h"

int all_sum(node * head)
{
	if(!head)
		return 0;

	int sum, count = 0;
	node * current = head;

	cout << "\nHere is the current list: ";

	while(current -> next){
		count++;
		sum += current -> data;
		cout << current -> data << " -> ";
		current = current -> next;
	}
	sum += current -> data;
	cout << current -> data << endl;
	cout << "This list contains "
	<< count+1 << " items.";

	return sum;
}


int sum_lrg_lst(node * head)
{
	if(!head)
		return 0;

	int sum, lastNum = 0;
	node * current = head;
	
	while(current -> next)
		current = current -> next;
	lastNum = current -> data;
	
	current = head;
	while(current -> next){

		if(lastNum < current -> data)
			sum += current -> data;
		current = current-> next;
	}

	if(lastNum < current -> data)
		sum += current -> data;
	current = current-> next;

	return sum;
}


int display_nonlast(node * head)
{
	if(!head)
		return 0;
	
	node * current = head;
	int sum = 0, last = 0;

	while(current -> next){
		current = current -> next;
	}
	last = current -> data;
	

	cout << "\nThe numbers larger than ";
	cout << last;
	cout << " are: ";
	current = head;
	while(current -> next){
		if(last < current -> data){
			sum += current -> data;
			cout << current -> data;
			cout << ", ";
		}
		current = current -> next;
	}

	if(last < current -> data){
		sum += current -> data;
		cout << current -> data;
		cout << ", ";
	}

	return sum;
}


int last_two_more_than_once(node * head)
{
    if(!head)
        return 0;

    int last = 0, prev = 0;
    int count = 0;
    node * current = head;

    while(current -> next -> next){
        current = current -> next;
    }
    prev = current -> data;
    last = current -> next -> data;

    current = head;
    while(current -> next -> next){
       if(current -> data == prev || current -> data == last) 
    count++;
       current = current -> next;
    }

    return count;
}


int remove_last(node * head)
{
    if(!head)
        return 0;
    
    int num = 0;
    node * current = head;

    while(current -> next -> next){
        current = current -> next;
    }

    num = current -> next -> data;
    delete current -> next;
    current -> next = NULL;

    return num;
}



int remove_all_but_firstLast(node * head)
{
    if(!head || !head -> next)
        return 0;

    int count = 0;
    node * current = head -> next;
    node * prev = head;
    node * temp;
    
    while(current -> next){
        temp = current;
        current = current -> next;
        prev -> next = current;
        delete temp;
        count ++;
    }
    return count;
}


// Copy the data at the last node and insert it at the beginning of the linear
// linked list (inserting a new node). Return the value of the NEW last node!
int insert_last_as_first(node * head)
{
    if(!head)
        return 0;

    int num = 0;
    node * current = head;

    while(current -> next){
        current = current -> next;
    }

    node * temp = new node;
    temp -> data = current -> data;

    temp -> next = head;
    head = temp;

    display_all(temp);

    return temp -> data;
}
