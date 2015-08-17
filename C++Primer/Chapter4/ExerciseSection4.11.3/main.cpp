#include <string>

void exercise4_36()
{
	int i = 2;
	double d = 10.6;

	i *= static_cast<int>(d);
}

void exercise4_37()
{
	int i{0};
	double d{1.5};
	std::string s{"hello"};
	const std::string *ps{&s};
	char c{'c'};
	char *pc{&c};
	void *pv;

	// a.
	pv = (void*)ps;
	// 1st cast away const then cast std::string* to void*
	pv = static_cast<void*>(const_cast<std::string*>(ps));

	// b.
	i = int(*pc);
	// cast char to int
	i = static_cast<int>(*pc);

	// c.
	pv = &d;
	// cast pointer to double to void*
	pv = static_cast<void*>(&d);

	// d.
	// cast pointer to double to pointer to char
	pc = (char*)pv;
	pc = reinterpret_cast<char*>(pv);
}

void exercise4_38()
{
	int j = 2;
	int i = 1;
	// It casts the quotient to double
	double slope = static_cast<double>(j/i);
}

int main()
{
	exercise4_36();
	exercise4_37();
	exercise4_38();

	return 0;
}
