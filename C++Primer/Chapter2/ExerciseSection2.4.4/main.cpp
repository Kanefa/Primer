void main()
{
// Exercise 2.32
// Not legal.
// int null = 0, *p = null;

// I don't believe VS2013 supports constexpr.

	constexpr int null = 0;
	const int *p = null;
}