#include <iostream>
#include <string>
#include "Library.h"
//include headers and libraries

int main(){
    Library library;
    
    string command;
    string bookName;
    //declare variables

    while (command != "quit") {
        cin >> command;
        if (command == "add") {
            cin >> bookName;
            if (library.addBook(bookName) == false) {
                cout << "The book already exists or the library is full." << endl;
            }
        } else if (command == "remove") {
            cin >> bookName;
            if (library.removeBook(bookName) == false) {
                cout << "The book does not exist." << endl;
            }
        } else if (command == "print") {
            library.print();
        } else if (command == "quit") {
            break;
        } else {
            cout << "Invalid command." << endl;
        }
    }
    //ask for commands and execute

}
