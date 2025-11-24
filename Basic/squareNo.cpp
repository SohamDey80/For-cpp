#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N;

    cout << "Squares from 1 to " << N << ":\n";
    for (int i = 1; i <= N; i++) {
        cout << i * i << " ";
    }

    cout << endl;
    return 0;
}