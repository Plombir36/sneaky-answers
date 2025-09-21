#include <iostream>

int main(void)
{
	int n;

	std::cin >> n;

	if (n / 1000 % 2 == 1)
	{
		std::cout << "YES" << std::endl;
	}
	else if (n / 100 % 10 % 2 == 1)
	{
		std::cout << "YES" << std::endl;
	}
	else if (n / 10 % 100 % 2 == 1)
	{
		std::cout << "YES" << std::endl;
	}
	else if (n % 1000 % 2 == 1)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	return 0;
}
