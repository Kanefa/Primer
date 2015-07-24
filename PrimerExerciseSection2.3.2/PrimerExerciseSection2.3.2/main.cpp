void main()
{
	// 2.18
	int ival = 0;
	int *ptr = nullptr;
	ptr = &ival;
	*ptr = 1;

	// 2.20
	int i = 42;
	int *p1 = &i;
	*p1 = *p1 * *p1; // p1 == 1764

	// 2.21
	int ii = 0;
	// double* dp = &ii; // illegal - cannot convert int * to double *
	// int *ip = ii;     // illegal - cannot convert from int to int *
	int *p2 = &i;        // legal

	// 2.24
	int iii = 42;
	void *p3 = &iii;     // p is a void pointer, so it can hold the address of any type
	// long *lp = &iii; // lp is of a long pointer, so it can oly hold the adress of a long (iii is of type int)
}