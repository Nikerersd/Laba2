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
        for (int i = N ; i>0; i--) {
            for (int k=N ; k>=i ; k--) {
                char Str = 'A' + k - 1;
                cout << Str << " ";
            }
            cout << endl;
        }
    }
}