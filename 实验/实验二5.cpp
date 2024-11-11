#include <iostream>
#include <cctype> 

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    std::cout << "请输入一行字符：" << std::endl;
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

    std::cout << "英文字母个数：" << letters << std::endl;
    std::cout << "空格个数：" << spaces << std::endl;
    std::cout << "数字字符个数：" << digits << std::endl;
    std::cout << "其他字符个数：" << others << std::endl;

    return 0;
}