#include <iostream>
using namespace std;

int main() {
    int a, b;
    long long result = 1;

    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;

    for (int i = 1; i <= b; i++) {
        result *= a;
    }

    cout << a << "^" << b << " = " << result << endl;
    return 0;
}