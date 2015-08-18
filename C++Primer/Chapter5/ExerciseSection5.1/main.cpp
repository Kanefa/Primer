#include <iostream>

void exercise5_1()
{
	// A null statement is a statement comprised of only a semicolon. You might use a null
	// statement when the language requires a statement, but your program's logic does not.
	// Here is an example where the loop's work can be done within its condition.
	char c;
	const char sought = 'z';
	while (std::cin >> c && c != sought)
		; // null statement
}

void exercise5_2()
{
	// A block or also known as a compound statement is a sequence of statements (possibly empty)
	// surrounded by a pair of curly braces. They are used when the language requires one statement,
	// but the programs logic may require more than one statement.
	// The body of a while or for loop are examples. The language requires them to be a single
	// statement, but the logic often requires more than one statement.
	int arr[4]{0, 1, 2};
	int sum = 0;
	for (auto &i : arr)
	{
		sum += i; // sum the elements
		i = 0;    // reset elements to 0
	}

}

void exercise5_3()
{
	// I have used the comma operator to combine two statements in the body of the while loop
	// into one statement. This will diminish the readability of the code since it combines
	// two independent statements on one line. The prefix increment is now easy to miss by a
	// programmer that is scanning the code.
	int sum = 0, val = 0;
	while (val <= 10)
		sum += val, ++val;
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
}

int main()
{
	// exercise5_1();
	exercise5_2();
	exercise5_3();

	return 0;
}
