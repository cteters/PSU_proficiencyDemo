#include "CS299_list.h"
//Place your name here

int main()
{
    int num;
    node * head;
    list object;
    object.build();    //builds a LLL
    object.display();  //displays the LLL

    //PLEASE PUT YOUR CODE HERE to call the functions
    cout << "The average of all nodes is ";
    cout << object.average() << "." <<endl;

    num = object.add_99();
    cout << "99 was added " << num << " times." <<endl;

    num = object.copy_all_even();
    cout << "There are " << num << " even nodes." <<endl;

    object.display();  //displays the LLL again!
   
    
    return 0;
}
