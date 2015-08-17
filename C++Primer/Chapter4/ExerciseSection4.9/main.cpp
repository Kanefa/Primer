#include <iostream>

void exercise4_28()
{
	std::cout << "sifeof(bool) = " << sizeof(bool) << "\n";

	std::cout << "sifeof(char) = " << sizeof(char) << "\n";
	std::cout << "sifeof(signed char) = " << sizeof(signed char) << "\n";
	std::cout << "sifeof(unsigned char) = " << sizeof(unsigned char) << "\n";

	std::cout << "sifeof(short int) = " << sizeof(short int) << "\n";
	std::cout << "sifeof(unsigned short int) = " << sizeof(unsigned short int) << "\n";
	
	std::cout << "sifeof(int) = " << sizeof(int) << "\n";
	std::cout << "sifeof(unsigned int) = " << sizeof(unsigned int) << "\n";

	std::cout << "sifeof(long int) = " << sizeof(long int) << "\n";
	std::cout << "sifeof(unsigned long int) = " << sizeof(unsigned long int) << "\n";

	std::cout << "sifeof(float) = " << sizeof(float) << "\n";
	std::cout << "sifeof(double) = " << sizeof(double) << "\n";
	std::cout << "sifeof(long double) = " << sizeof(long double) << "\n";

	std::cout << "sifeof(wchar_t) = " << sizeof(wchar_t) << "\n\n";
	// sizeof(void); // undefined
}

void exercise4_29()
{
	int x[10];
	int *p = x;
	
	// size of entire array / size of element = total number of elements
	std::cout << sizeof(x) / sizeof(*x) << std::endl;

	// size of int pointer / size of int
	std::cout << sizeof(p) / sizeof(*p) << std::endl;
}

void exercise4_30()
{
	// a.
	// sizeof x + y;
	// (sizeof x) + y;

	// b.
	// sizeof p->mem[i];
	// sizeof ((p->mem)[i]);

	// c.
	// sizeof a < b;
	// (sizeof a) < b;

	// d.
	// sizeof f();
	// sizeof (f());
}

int main()
{
	exercise4_28();
	exercise4_29();
	exercise4_30();
	return 0;
}
