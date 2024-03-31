#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    if (N>26) {
        cout << "Incorrect data";
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