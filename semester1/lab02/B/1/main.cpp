#include <iostream>

int main(void)
{
	double a, b, c;

	std::cin >> a >> b >> c;

	if (a + b > c && a + c > b && b + c > a)
	{
		std::cout << "Rectangular" << std::endl;
	}
	else
	{
		std::cout << "Non-rectangular" << std::endl;
	}

	return 0;
}
