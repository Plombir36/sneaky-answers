#include <iostream>

int main(void)
{
	double a, b, c;

	std::cin >> a >> b >> c;

	if (a + b > c || a + c > b || b + c > a)
	{
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		{
			std::cout << "Rectangular" < std::endl;
		}
		else
		{
			std::cout << "Non-rectangular" << std::endl;
		}
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	return 0;
}
