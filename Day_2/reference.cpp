#include <iostream>
int main(){
    int a = 5;
    int &r = a;
    std::cout << "\n a = " << a;
    std::cout << "\n r = " << r;
    std::cout << "\n &a = " << &a;
    std::cout << "\n &r = " << &r;

//     int a = 10;
//     std::cout << a << "\n"
//               << r;
// 
}