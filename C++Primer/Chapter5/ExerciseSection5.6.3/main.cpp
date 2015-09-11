#include <iostream>
#include <stdexcept>

void exercise5_23()
{
	int x, y;
	std::cin >> x >> y;
	std::cout << x / y << "\n";
}

void exercise5_24()
{
	int x, y;
	std::cin >> x >> y;
	if (0 == y)
		throw std::runtime_error("Cannot divide by 0.");
	std::cout << x / y << "\n";
}

void exercise5_25()
{
	int x, y;
	std::cin >> x >> y;
	if (0 == y)
		throw std::runtime_error("Cannot divide by 0.\n");
	std::cout << x / y << "\n";
}

int main()
{
	exercise5_23();
	exercise5_24();
	while (true)
	{
		try
		{
			exercise5_25();
			break;
		}
		catch (std::runtime_error err)
		{
			std::cout << err.what() << "Enter both integer inputs again.\n";
		}
	}

	return 0;
}
