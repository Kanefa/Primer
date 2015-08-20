#include <iostream>
#include <string>

void exercise5_5()
{
	std::cout << "Enter a grade from 0 to 100 (inclusive) and press enter. ";
	int numberGrade = 0;
	std::cin >> numberGrade;
	std::string letterGrade{"F"};

	const std::string gradeScale[]{"F", "D", "C", "B", "A", "A++"};
	if (numberGrade < 60)
		;
	else
		letterGrade = gradeScale[(numberGrade - 50) / 10];

	std::cout << "The letter grade is a(n) " << letterGrade << ".\n";
}

void exercise5_6()
{
	std::cout << "Enter a grade from 0 to 100 (inclusive) and press enter. ";
	int numberGrade = 0;
	std::cin >> numberGrade;
	std::string letterGrade{"F"};

	const std::string gradeScale[]{"F", "D", "C", "B", "A", "A++"};

	(numberGrade < 60) ? letterGrade = "F" : letterGrade = gradeScale[(numberGrade - 50) / 10];

	std::cout << "The letter grade is a(n) " << letterGrade << ".\n";
}

int get_value()
{
	return 5;
}

void exercise5_7()
{
	// a.
	// Added semicolon
	int ival1 = 0, ival2 = 1;
	if (ival1 != ival2)
		ival1 = ival2;
	else ival1 = ival2 = 0;

	// b.
	// The assignment to occurs happens unconditionally. Added braces to create block.
	int ival = 1, minval = 2, occurs = 0;
	if (ival < minval)
	{
		minval = ival;
		occurs = 1;
	}

	// c.
	// ival's scope did not extend to the second if. Declared it outside the first if.
	// ival declared in proper scope in part a
	if (ival = get_value())
		std::cout << "ival = " << ival << std::endl;
	if (!ival)
		std::cout << "ival = 0\n";

	// d.
	// ival assignment will lead to the condition always being false. Equality is likely what was meant.
	if (ival == 0)
		ival = get_value();
}

void exercise5_8()
{
	// The dangling else problem is the issue of what if the else clause matches with. In C++ the else is
	// matched with the closest preceding unmatched if. Remember, statements do not span block boundaries.
}

int main()
{
	exercise5_5();
	exercise5_6();
	exercise5_7();
	exercise5_8();

	return 0;
}
