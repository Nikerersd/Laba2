#include <iostream>
#include <string>
#include <set>
using namespace std;
bool Pangram(const string& sentence) {
    set<char> letters;
    for (char ch : sentence) {
        if (isalpha(ch)) {
            letters.insert(ch);
        }
    }
    return letters.size() == 26; //26 letters in the Latin alphabet
}

int main() {
    string sentence;
    cout << "Enter a string of lowercase Latin letters: ";
    getline(cin, sentence);
    cout << boolalpha << Pangram << endl;
    return 0;
}