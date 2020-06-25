#include "CS299_list.h"

//Place your name here in comments:
//
//
//
int main()
{
    int num = 0;
    //The following code builds the linear linked list
    node * head = NULL;
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the functions
    if(check_for(2, head))
        cout << "2 is in the LLL" <<endl;
    else
        cout << "2 is not in the LLL" <<endl;

    num = every_other(0, head);
    cout << "\nThe number of nodes just displayed was " << num << "." <<endl;

    cout << "Adding " << num << " to the second to last node." <<endl;
    cout << "The last node has a value of " << add_before_last(num, head) << ".\n";

    cout << "Making a complete copy..." <<endl;
    node * cpy = new node;
    num = make_a_copy(head, cpy);
    cout << num << " nodes copied and the new LLL reads:" << endl;
    display_all(cpy);

    cout << "deteleting all but first and last" <<endl;
    num = remove_not_first_last(head);
    cout << "The sum of nodes deleted was " << num << ".\n";

    display_all(head);
    destroy(head);    
    destroy(cpy);

    return 0;
}
