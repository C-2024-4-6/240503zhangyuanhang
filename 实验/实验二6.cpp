#include <iostream>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a, b;
    std::cout << "������������������" << std::endl;
    std::cin >> a >> b;
    if (a <= 0 || b <= 0) {
        std::cout << "��������ֱ����������������������롣" << std::endl;
        return 1; 
    }
    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = lcm(a, b);

    std::cout << "���Լ��Ϊ��" << greatestCommonDivisor << std::endl;
    std::cout << "��С������Ϊ��" << leastCommonMultiple << std::endl;

    return 0;
}