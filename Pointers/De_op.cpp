// Deference operator
#include <iostream>
#include <vector>

using namespace std;

int main (){
    int a = 10;
    int *ptr = &a;

    int **Parptr = &ptr;

    cout << *(&a) << endl;
    cout << *(ptr) <<endl;
    cout << (ptr) <<endl;
    cout << ptr <<endl;
    cout << *(Parptr) <<endl;
    cout << **(Parptr) <<endl;
    return 0;
}