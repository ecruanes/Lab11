//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

//implement class functions
Library::Library(){
    //initialize all books to ""
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}
bool Library:: addBook(string bookName){
    //check if the book already exists
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            return false;
        }
    }
    //check if the library is full
    for(int i = 0; i < 10; i++){
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }
    }
    return false;
}
bool Library::removeBook(string bookName){
    //check if the book exists
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            books[i] = "";
            return true;
        }
    }
    cout << "Cannot remove the book." << endl;
    return false;
}
void Library::print(){
    //print all books
    for(int i = 0; i < 10; i++){
        if(books[i] != ""){
            cout << books[i] << endl;
        }
    }
}  //end of Library.cpp
