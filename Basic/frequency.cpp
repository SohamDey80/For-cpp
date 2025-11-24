#include <iostream>
using namespace std;

int main() {
    long long number;
    int freq[10] = {0};

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) number = -number;

    while (number > 0) {
        int digit = number % 10;
        freq[digit]++;
        number /= 10;
    }

    cout << "Digit frequencies:\n";
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0)
            cout << "Digit " << i << ": " << freq[i] << " times\n";
    }

    return 0;
}