#include <iostream>
using namespace std;

int factorial(int x);
int main() {
    int n;
    int fact;
    std::cout << "Enter a positive integer to compute its factorial: ";
    std::cin >> n;
    fact = factorial(n);
    std::cout << "Factorial of " << n << " is " << fact;
    std::cout << std::endl;
    return 0;

}

int factorial(int x) {
    int fact;
    if(x==0){
        return 1;
    }
    else {
        fact = x * factorial(x - 1);
        return fact;
    }
}