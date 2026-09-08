#include <iostream>
using namespace std;

int main() {
    int num = 500;
    
    // 1. A normal pointer stores the address of 'num'
    int* ptr1 = &num;
    
    // 2. A pointer-to-pointer stores the address of 'ptr1'
    int** ptr2 = &ptr1;
    
    cout << "--- Memory Addresses ---" << endl;
    cout << "Address of num:   " << &num << endl;
    cout << "Address of ptr1:  " << &ptr1 << endl;
    
    cout << "\n--- What the pointers are storing ---" << endl;
    cout << "ptr1 holds:       " << ptr1 << " (Matches address of num)" << endl;
    cout << "ptr2 holds:       " << ptr2 << " (Matches address of ptr1)" << endl;
    
    cout << "\n--- Dereferencing (Following the map) ---" << endl;
    
    // Dereferencing ptr1 ONCE (*ptr1) travels to 'num'
    cout << "Value of *ptr1:   " << *ptr1 << endl; 
    
    // Dereferencing ptr2 ONCE (*ptr2) travels to 'ptr1' and reads the address inside it
    cout << "Value of *ptr2:   " << *ptr2 << endl; 
    
    // Dereferencing ptr2 TWICE (**ptr2) travels to 'ptr1', gets the next address, travels to 'num', and reads the data
    cout << "Value of **ptr2:  " << **ptr2 << endl; 

    return 0;
}