#include <iostream>
#include <vector>

void exercise4_17()
{
	// The prefix increment/decrement operator increments/decrements 
	// its operand and then returns the changed object.
	// The postfix increment/decrement operator increments/decrements
	// its operand and then returns an unchanged copy of the original value.  
}

void exercise4_18()
{
	std::vector<int> v{0, 1, 2, 3};
	auto pbeg = v.begin();
	while (pbeg != v.end() && *pbeg >= 0)
		std::cout << *++pbeg << std::endl;	// This will increment the iterator, dereference it, and then output it without 
											// it having ever passed the condition. Potentional problems 1. The first value
											// is skipped. A negative number will be printed before it fails the condition.
											// One past the end of the vector will be dereferenced. 
}

void exercise4_19()
{
	std::vector<int> vec{0, 1, 2};
	int ival = 0;
	int *ptr = &ival;

	// a. The logical AND (&&) operator guarantees the order of evaluation. First evaluate the righthand operand (ptr != 0).
	// The lefthand operand will be the boolean result of the inequality check between ptr and 0. Then evaluate the lefthand 
	// operand (*ptr++). First, ptr will be incremented, but the original value will be dereference. You'll be left with
	// (ptr != 0 && *ptr)
	ptr != 0 && *ptr++;

	// a. The logical AND (&&) operator guarantees the order of evaluation. First evaluate the righthand operand (ival++).
	// iVal will be incremented, but the lefthand operand will be the original value. Then evaluate the lefthand operand (ival).
	// You'll be left with (ival && ival).
	ival++ && ival;

	// c. The relational less than of equal (<=) operator does not guarantees the order of evaluation. The behavior is undefined.
	// We can correct this by breaking the single statement into two statements where we either increment ival first, or evaluate 
	// the relational less than equal (<=) first.
	// vec[ival++] <= vec[ival];
}

int main()
{
	// exercise4_18();
	exercise4_19();
	return 0;
}
