#include <iostream>
#include <typeinfo>


void main()
{
	int i = 0, &r = i;
	auto a = r; // a is an int

	const int ci = i, &cr = ci;
	auto b = ci;  // b is an int
	auto c = cr;  // c is an int
	auto d = &i;  // d is an int * 
	auto e = &ci; // e is an  const int *

	std::cout << "a: " << a << std::endl << "b: " << b << std::endl << "c: " << c << std::endl
		      << "d: " << d << std::endl << "e: " << e << std::endl;

	////////////////
	// Exercise 2.33	
	a = 42; // a is assigned an int
	b = 42; // b is assigned an int
	c = 42; // c is assigned an int
//	d = 42; // Error, d is assigned an int, but expects an int *.
//	e = 42; // Error, e is assigned an int, but expects a const int *.

	////////////////
	// Exercise 2.34
	std::cout << "a: " << a << std::endl << "b: " << b << std::endl << "c: " << c << std::endl;

	char x;
	std::cin >> x;

	////////////////
	// Exercise 2.35
	const int n = 42;
	auto j = n;                 // j is an int
	const auto &k = n;          // k is a const int &
	auto *p = &n;               // p is a const int *
	const auto j2 = n, &k2 = n; // j2 is a cont int, and k2 is a const int &

//	j = 1;
//	k = 1;
//	*p = 1;
//	j2 = 1;
//	k2 = 1;

//	std::cout << "j: " << typeid(j).name() << std::endl << "k: " << typeid(k).name() << std::endl 
//		      << "p: " << typeid(p).name() << std::endl << "j2: " << typeid(j2).name() << std::endl 
//			  << "k2: " << typeid(k2).name() << std::endl;

	std::cin >> x;
}