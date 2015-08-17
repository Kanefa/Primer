void exercise4_34()
{
	char cval = 'a';
	int ival = 1;
	float fval = 0.1f;

	// a. 
	// fval is converted to a boolean value
	if (fval) {};

	// b. 
	// ival is converted to a float. The float sum is converted to a double.
	double dval = fval + ival;

	// c. 
	// cval is converted to an integer. The product is converted to a double.
	dval + ival * cval;
}

void exercise4_35()
{
	char cval = 'a';
	int ival = -1;
	unsigned int ui = 1;
	float fval = 1.0f;
	double dval = 1.0;

	// a.
	// 'a' is converted to an integer. The sum is then converted to a char.
	cval = 'a' + 3;

	// b.
	// ival is converted to a double and multiplied by 1.0. ui is then converted to a double and then the difference is converted to a float.
	fval = ui - ival * 1.0;

	// c.
	// ui is converted to a float. The product is then converted to a double.
	dval = ui * fval;

	// d.
	// ival is converted to a float. The sum is then converted to a double and added to dval. The final sum is then converted to a cval.
	cval = ival + fval + dval;
}

int main()
{
	exercise4_34();
	exercise4_35();

	return 0;
}
