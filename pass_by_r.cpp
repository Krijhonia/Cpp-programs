#include <iostream>
#include <vector>
using namespace std;

void changeA(int *ptr){ //pass by ref
    *ptr = 20;
}

int main(){
    int a = 10;
    changeA(&a);
    cout << "inside main fnx : " << a << endl; //20

    return 0;
}