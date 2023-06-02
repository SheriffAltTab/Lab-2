#include <iostream>
#include "List.h";
using namespace std;


int main() {
    LinkedList list;
    // Add some nodes
    list.addNode();
    list.addNode();
    list.addNode();

    // Display the list
    cout << "The list contains: ";
    list.display();

    // Add a character to the beginning of the list
    list = list + 'A';

    // Display the updated list
    cout << "The updated list contains: ";
    list.display();

    // Check if the list contains a character
    if (list == 'A') {
        cout << "The list contains 'A'" << endl;
    }
    else {
        cout << "The list does not contain 'A'" << endl;
    }

    return 0;


}