#include <iostream>
#include <cctype> 

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    std::cout << "������һ���ַ���" << std::endl;
    while ((c = std::cin.get()) != '\n' && !std::cin.eof()) {
        if (std::isalpha(c)) 
            letters++;
        }
        else if (std::isspace(c)) { 
            spaces++;
        
        else if (std::isdigit(c)) { 
            digits++;
        }
        else { 
            others++;
        }
    }

    std::cout << "Ӣ����ĸ������" << letters << std::endl;
    std::cout << "�ո������" << spaces << std::endl;
    std::cout << "�����ַ�������" << digits << std::endl;
    std::cout << "�����ַ�������" << others << std::endl;

    return 0;
}