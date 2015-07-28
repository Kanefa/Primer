#include <iostream>
#include <limits>
#include <vector>

void exercise4_4()
{
	std::cout << "12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 = ";
	std::cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << "\n";

	std::cout << "((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) = ";
	std::cout << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) << "\n\n";
}

void exercise4_5()
{
	std::cout << "-30 * 3 + 21 / 5 = "; // -86
	std::cout << -30 * 3 + 21 / 5 << "\n";

	std::cout << "-30 + 3 * 21 / 5 = "; // -18
	std::cout << -30 + 3 * 21 / 5 << "\n";

	std::cout << "30 / 3 * 21 % 5 = "; // 0
	std::cout << 30 / 3 * 21 % 5 << "\n";

	std::cout << "-30 / 3 * 21 % 4 = "; // -2
	std::cout << -30 / 3 * 21 % 4 << "\n";
}

void exercise4_6()
{
	std::cout << "Enter an integer value: ";
	int iValue = 0;
	std::cin >> iValue;
	int modValue = iValue % 2;
	std::cout << iValue;
	if (0 == modValue)
		std::cout << " is even.";
	else
		std::cout << " is odd.";
}

void exercise4_7()
{
	// Overflow - Computer limitation dealing with type size. When the size of a type exceeds its max size
	// an overflow occurs. The behavior is undefined.
	char cValue = std::numeric_limits<char>::max() + 1;
	int iValue = std::numeric_limits<int>::max() + 1;
	unsigned short ssValue = std::numeric_limits<unsigned short>::max() + 1;


}

void main()
{
	exercise4_4();
	exercise4_5();
	exercise4_6();
	exercise4_7();
}