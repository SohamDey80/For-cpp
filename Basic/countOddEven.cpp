#include <iostream>
using namespace std;

int main() {
    long long number;
    int evenCount = 0, oddCount = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) number = -number;
    do {
        int digit = number % 10;
        if (digit % 2 == 0)
            evenCount++;
        else
            oddCount++;
        number /= 10;
    } while (number > 0);

    cout << "Even digits = " << evenCount << endl;
    cout << "Odd digits = " << oddCount << endl;

    return 0;
}