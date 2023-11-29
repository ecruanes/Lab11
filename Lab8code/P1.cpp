//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){
    Library library;
    char command;
    string bookname; 
    while(true){ 
        cout << "Enter command: ";
        cin >> command;
        //ask for commands and execute
        if(command == 'q'){
            cout<<"Quitting"<<endl; 
            break;
        }
        else if(command == 'a'){
            cout << "Enter book name: ";
            cin >> bookname;
            library.addBook(bookname);
        }
        else if(command == 'r'){
            cout << "Enter book name: ";
            cin >> bookname;
            library.removeBook(bookname);
        }
        else if(command == 'p'){
            library.print();
        }
        else{
            cout << "Invalid command" << endl;
        }

    }
    return 0;
    
    

}
