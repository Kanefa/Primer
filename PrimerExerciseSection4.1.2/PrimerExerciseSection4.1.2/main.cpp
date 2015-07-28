#include <iostream>
#include <vector>

void exercise4_1()
{
	std::cout << "The return value of 5 + 10 * 20 / 2 is ";
	std::cout << 5 + 10 * 20 / 2 << ".\n";
}

void exercise4_2()
{
	std::vector<int> vec{ 0, 100, 200 };

	std::cout << "*vec.begin(): ";
	std::cout << *vec.begin() << "\n";
	std::cout << "*(vec.begin()): ";
	std::cout << *(vec.begin()) << "\n";

	std::cout << "*vec.begin() + 1: ";
	std::cout << *vec.begin() + 1 << "\n";
	std::cout << "(*(vec.begin())) + 1: ";
	std::cout << (*(vec.begin())) + 1 << "\n";
}

void main()
{
	exercise4_1();
	exercise4_2();
}
