#include <iostream>
#include <string>

int get_response()
{
	return 0;
}

void exercise5_18()
{
	// a.
	// The do while loops requires one statement, but our logic requires multiple statements,
	// so we need to use parentheses to create a compound statement.
	do
	{
		int v1, v2;
		std::cout << "Please enter two numbers to sum:";
		if (std::cin >> v1 >> v2)
			std::cout << "Sum is: " << +v2 << std::endl;
	} while (std::cin);
	std::cin.clear();

	// b.
	// Since the do while condition occurs last variable definitions are not allowed, they
	// must be moved to before the loop.
	int ival0 = 0;
	do
	{
		// ...
	} while (ival0 = get_response());

	// c.
	// Variables declared within the compound statement have local scope and cannot be used
	// in the condition. They must be moved to before the loop.
	int ival1 = 0;
	do
	{
		ival1 = get_response();
	} while (ival1);

}

void exercise5_19()
{
	do
	{
		std::cout << "Enter two strings.\n";
		std::string str1, str2;
		if (std::cin >> str1 >> str2)
		{
			if (str1 < str2)
				std::cout << str1 << " is smaller than " << str2 << ".\n";
			else if (str1 > str2)
				std::cout << str2 << " is smaller than " << str1 << ".\n";
			else
				std::cout << str1 << " is equal to " << str2 << ".\n";
		}
	} while (std::cin);
	std::cin.clear();
}

int main()
{
	exercise5_18();
	exercise5_19();

	return 0;
}
