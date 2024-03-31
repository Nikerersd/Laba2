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

    return letters.size() == 26; // 26 ���� � ���������� ��������
}

int main() {
    system("chcp 1251");
    std::string sentence;
    std::cout << "������� ������ �� �������� ���� ���������� ��������: ";
    std::getline(std::cin, sentence);

    if (isPangram(sentence)) {
        std::cout << "������ ������ �������� ����������.\n";
    } else {
        std::cout << "������ ������ �� �������� ����������.\n";
    }

    return 0;
}