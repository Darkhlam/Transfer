#include <iostream>
#include "Transfer.h"


int main()
{
	long long num;
	std::cout << "Enter number: ";
	std::cin >> num;
	Transfer tranfer(num);
	std::cout << "Your number in binary number system is \t" << tranfer.transferDecimalNumber(2) << std::endl;
	std::cout << "Your number in octal number system is \t" << tranfer.transferDecimalNumber(8) << std::endl;
	std::cout << "Your number in hex number system is \t" << tranfer.transferDecimalNumber(16) << std::endl;
}