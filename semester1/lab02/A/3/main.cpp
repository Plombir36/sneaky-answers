#include <iostream>

int main(void)
{
	int a;

	std::cin >> a;

	if (a >= 1582 && a <= 2200)
	{
		if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
		{
			std::cout << "leap year" << std::endl;
		}
		else
		{
			std::cout << "non-leap year" << std::endl;
		}
	}
	else
	{
		std::cout << "out of range" << std::endl;
	}

	return 0;
}
