#include <iostream>

int main(void)
{
	int a;

	std::cin >> a;

	if (a > 0)
	{
		std::cout << "positive" << std::endl;
	}
	else if (a < 0)
	{
		std::cout << "negative" << std::endl;
	}
	else
	{
		std::cout << "zero" << std::endl;
	}

	return 0;
}
