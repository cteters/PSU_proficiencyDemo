#include "CS299_arr.h"
//Please place your name here:
//
//


int main()
{
    table object; 
    object.build(); //creates an array of LLL
    object.display(); //displays the array

    //PLEASE PUT YOUR CODE HERE to call the functions

/*    object.display_reverse();

    cout << "The average of all nodes is " << object.average() << endl;

    cout << "\nMaking a deep copy... " << endl;
    int size = object.getSize();
    node ** cpy;
    cpy = new node*[size];
    for(int i = 0; i < size -1; i++){
        cpy[i] = NULL;
    }
    object.copy(cpy);
    cout << "The new copy:" <<endl;
    disp(size, cpy);
    dealocate(size, cpy);
 */   

    cout << "removing all nodes but first and last of each LLL..." <<endl;

    cout << object.remove_not_first_last() << " nodes were removed." <<endl;

    object.display();  //display again afterward!
    
    
    return 0;
}
