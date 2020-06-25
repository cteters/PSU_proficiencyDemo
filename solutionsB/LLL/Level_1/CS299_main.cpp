#include "CS299_list.h"

//Place your name here in comments:
//
//
//
int main()
{
    //This code sets up the list
    node * head = NULL;
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the functions for lab
	int sum = 0;
	sum = all_sum(head);
	cout << "\nThe sum of all data is :"
	<< sum;

//	sum = sum_lrg_lst(head);
//	cout << "\nThe sum of the data that is larger than the last is ";
//	cout << sum;

	sum = display_nonlast(head);
	cout << "\nThe total sum is ";
	cout << sum << endl;
        
        sum = last_two_more_than_once(head);
        cout << "the last two nums appear more than once ";
        cout << sum << " times." << endl;
        sum = remove_last(head);
        cout << sum << " was removed." <<endl;

//        sum = remove_all_but_firstLast(head);
 //       cout << "removed " << sum << " nodes." <<endl;

        sum = insert_last_as_first(head);
        cout << "added " << sum << " as first.";

    display_all(head);
    destroy(head);    

    return 0;
}
