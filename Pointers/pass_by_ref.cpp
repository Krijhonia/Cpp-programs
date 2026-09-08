#include <iostream>

int main(){
    std:: string x = "X";
    std:: string y  = "Y";

    swap(x,y);

    std:: cout<< "X: " << x << '\n';
    std:: cout<< "Y: " << y << '\n';


}

void swap(std:: string &x,std:: string &y){
    std:: string temp;
    temp = x ;
    x = y;
    y = temp;
}