#include <iostream>
using namespace std;
int main() {
    cout << "Enter the number of characters" << endl;
    int N;
    cin >> N;
    if (N>26) {
        cout << "Incorrect data" << endl;
    }
    else {
        for (;N>0;N--) {
            for (int k=N;k>0;k--) {
                char Str = 'A' + k - 1;
                cout << Str << " ";
            }
            cout << endl;
        }
    }
}