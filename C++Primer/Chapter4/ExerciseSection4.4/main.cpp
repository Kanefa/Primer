void exercise4_13()
{
	int i;
	double d;

	// a.
	// Assignment is right associative. 3.5 will be converted to an int and assigned 
	// to i. Next, i will be converted to a double and assigned to d. i = 3 and d = 3.0.
	d = i = 3.5;

	// b.
	// Assignment is right associative. 3.5 will be assigned to to d. Next, d will be  
	// converted to an int and assigned to i. i = 3 and d = 3.5.
	i = d = 3.5;
}

void exercise4_14()
{
	int i = 0;
	
	// a.
	// This is illegal. I cannot be assigned to a literal.
	// if (42 = i)
	// {}

	// b.
	// 42 is assigned to i. Then i is converted to a bool.
	// If i is 0 then it is false otherwise it is true.
	if (i = 42)
	{}
}

void exercise4_15()
{
	double dval;
	int ival;
	int *pi;
	
	// Each object in a multiple assignment must have the same type as its 
	// right-hand neighbor or a type to which that neighbor can be converted.
	// dval = ival = pi = 0;
	// How I would fix it
	dval = ival = 0;
	pi = 0;

}

void exercise4_16()
{
	// a.
	// Since assignment has a low precedence the relational operator
	// will be evaluated first. This will return a bool which will be
	// used as the right-hand operand of the assignment. 0 or 1 will be
	// assigned to p.
	// if (p = getPtr() != 0)
	// {}
	// To correct this would place parentheses around the assignment.
	// if ((p = getPtr() != 0)
	// {}

	// b.
	// The condition only tests the result of assigning 1024 to i. If i is 0 then it is false otherwise it is true.
	// if (i = 1024)
	// {}
	// The condition was likely meant to check whether i was equal to 1024.
	// if (i == 1024)
	// {}
}

int main()
{
	exercise4_13();
	exercise4_14();
	exercise4_15();

	return 0;
}
