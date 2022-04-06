#include <iostream>
#include <climits>

int main()
{
    std::cout << "sizeof information" << std::endl;
    std::cout << "=============================" << std::endl;

    std::cout << "char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes" << std::endl;

    return 0;
}