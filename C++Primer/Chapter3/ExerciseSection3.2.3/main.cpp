#include <cctype>
#include <iostream>
#include <string>
#include <typeinfo>

int main()
{
/*
	// ALW - Exercise 3.6
	std::string str = "Hello World!";
	for (auto &s : str)
	{
		s = 'X';
	}

	std::cout << str;
*/
	// ALW - Exercise 3.7
	// It works as expected. String is a container that holds chars.

/*
	// ALW - Exercise 3.8a
	std::string str = "Hello World!";
	std::string::iterator iter = begin(str);
	for (; iter < end(str); ++iter)
	{
		*iter = 'X';
	}

	std::cout << str;
*/
/*
	// ALW - Exercise 3.8b
	std::string str = "Hello World!";
	const auto size = str.size();
	decltype(str.size()) count = 0;
	while (count < size)
	{
		str[count] = 'X';
		++count;
	}

	std::cout << str;
*/
/*
	// ALW - Exercise 3.9
	// ALW - Invalid, because indexing an empty container is undefined.
	std::string s;
	std::cout << s[0] << std::endl;
*/
/*
	// ALW - Exercise 3.10
	std::string str = "Hello World!";
	for (auto s : str)
	{
		if (!std::ispunct(s))
			std::cout << s;
	}
*/
/*
	// ALW - Exercise 3.11
	// ALW - Valid, c is of type const char &.
	const std::string s = "Keep out!";
	for (auto &c : s)
	{ 
		// c = 'X'; // ALW - Error!
		std::cout << typeid(c).name() << std::endl;
	}

	std::cout << s;
*/
	return 0;
}