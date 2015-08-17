#include <iostream>

void exercise4_8()
{
	// Logical AND
	// The leftmost operand is evaluated first. If true then the next leftmost operand is evaluated.

	// Logical OR
	// The leftmost operand is evaluated first. If false then the next leftmost operand is evaluated.

	// Equality Operators
	// Not specified
}

void exercise4_9()
{
	// Both cp and *cp are converted to boolean values.
	// Since they are both nonzero they evaluate to true.
	// If statement will evaluate to true.
	const char *cp = "Hello world";
	if (cp && *cp)
	{}
}

void exercise4_10()
{
	int x = 0;
	while (std::cin >> x && x != 42)
	{}
}

void exercise4_11()
{
	const int a = 0, b = 1, c = 2, d = 4;

	if (a < b && b < c && c < d)
	{}
}

void exercise4_12()
{
	const int i = 0, j = 1, k = 2;

	// The condition groups i and j to the first operator !=. Whose result is a bool.
	// The bool is then the left-hand operand to the operator <. So k is compared to
	// the true/false result of the first comparison.
	if (i != j < k)
	{}
}

int main()
{
	// exercise4_10();
	exercise4_11();
	exercise4_12();

	return 0;
}
