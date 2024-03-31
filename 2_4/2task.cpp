#include <iostream>
#include <string>
#include <set>

bool isPangram(const std::string& sentence) {
    std::set<char> letters;
    for (char ch : sentence) {
        if (std::isalpha(ch)) {
            letters.insert(std::tolower(ch));
        }
    }

    return letters.size() == 26; // 26 букв в английском алфавите
}

int main() {
    system("chcp 1251");
    std::string sentence;
    std::cout << "Введите строку из строчных букв латинского алфавита: ";
    std::getline(std::cin, sentence);

    if (isPangram(sentence)) {
        std::cout << "Данная строка является панграммой.\n";
    } else {
        std::cout << "Данная строка не является панграммой.\n";
    }

    return 0;
}