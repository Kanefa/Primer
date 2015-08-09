#include <iostream>
#include <string>
#include <vector>

void exercise4_21()
{
	const std::vector<int> v{0, 1, 2, 3, 4, 5};

	for (auto i : v)
	{
		std::cout << (i % 2 != 0 ? i * 2 : i) << "\n";
	}

	std::cout << "\n";
}

void exercise4_22()
{
	// The if else statements are easier to read. It's easier to read, because the comparisons are done in a descending order.
	const std::vector<int> grades{59, 60, 65, 70, 75, 80, 85, 90, 95, 100, 0};

	for (auto g : grades)
	{
		std::cout << (g > 90 ? "High Pass " : g < 60 ? "Fail " : g > 75 ? "Pass " : "Low Pass ");
	}

	std::cout << "\n";

	for (auto g : grades)
	{
		if (g > 90)
			std::cout << "High Pass ";
		else if (g > 75)
			std::cout << "Pass ";
		else if (g > 59)
			std::cout << "Low Pass ";
		else
			std::cout << "Fail ";
	}

	std::cout << "\n";
}

void exercise4_23()
{
	std::string s = "word";
	
	// The expression fails because the equality operator is of lower precedence than the add operator.
	// What happens is the equality operator ends up having a string and a char as its operands.
	// std::string pl = s + s[s.size() - 1] == 's' ? "" : "s");

	// I would fix it so the condition is s[s.size() - 1] == 's' and the result "" or "s" is concatenated
	// with the string s.
	std::string pl = s + ((s[s.size() - 1] == 's') ? "" : "s");
}

void exercise4_24()
{
	// If the conditional operator was left associative the result of the 1st condition would be the condition 
	// of the next conditional operator an so on.

	int g{75};

	// Right Associative
	std::cout << (g > 90 ? "High Pass " : (g < 60 ? "Fail " : (g > 75 ? "Pass " : "Low Pass ")));

	std::cout << "\n";

	// Left Associative
	std::cout << (((g > 90 ? "High Pass " : g < 60) ? "Fail " : g > 75) ? "Pass " : "Low Pass ");
}

int main()
{
	exercise4_21();
	exercise4_22();
	exercise4_23();
	exercise4_24();

	return 0;
}
