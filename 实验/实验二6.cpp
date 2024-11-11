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
    std::cout << "请输入两个正整数：" << std::endl;
    std::cin >> a >> b;
    if (a <= 0 || b <= 0) {
        std::cout << "输入的数字必须是正整数，请重新输入。" << std::endl;
        return 1; 
    }
    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = lcm(a, b);

    std::cout << "最大公约数为：" << greatestCommonDivisor << std::endl;
    std::cout << "最小公倍数为：" << leastCommonMultiple << std::endl;

    return 0;
}