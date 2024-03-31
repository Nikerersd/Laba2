#include <iostream>
using namespace std;

int countEvenDigits(int number) {
    int count = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of numbers: ";
    cin >> n;

    cout << "Enter the numbers separated by a space: ";
    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;
        cout << countEvenDigits(number);
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
