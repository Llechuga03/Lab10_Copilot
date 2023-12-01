#include "Library.h" 
#include <iostream>
#include <string>
// headers and libraries

//implement class functions
Library::Library() {
    for (int i = 0; i < 10; i++) {
        books[i] = "";
    }
}   //constructor

bool Library::addBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) {
            return false;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (books[i] == "") {
            books[i] = bookName;
            return true;
        }
    }
    return false;
}   //addBook

bool Library::removeBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) {
            books[i] = "";
            return true;
        }
    }
    return false;
}   //removeBook

void Library::print() {
    for (int i = 0; i < 10; i++) {
        if (books[i] != "") {
            cout << books[i] << endl;
        }
    }
}   //print

