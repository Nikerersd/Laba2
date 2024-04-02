#include <iostream>
using namespace std;

int EvenDigits(int number) {
    if (number < 0) {
        number = -number;
        }
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
    if (n>0){
        cout << "Enter the numbers separated by a space: ";
        for (int i = 0; i < n; ++i) {
            int number;
            cin >> number;
            cout << EvenDigits(number);
            if (i < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    else {
        cout << "Incorrect data" << endl;
    }
    return 0;
}