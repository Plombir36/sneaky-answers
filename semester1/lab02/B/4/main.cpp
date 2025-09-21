#include <iostream>
#include <cmath>

int main(void)
{
	double a, b, c;
	bool solved = false;

	std::cin >> a >> b;

	if (a > 0)
	{
		std::cout << -std::sqrt(a) << ' ' << std::sqrt(a) << ' ';
		solved = true;
	}
	else if (a == 0)
	{
		std::cout << 0 << ' ';
		solved = true;
	}

	if (b < 0)
	{
		std::cout << -std::sqrt(std::abs(b)) << ' ' << std::sqrt(std::abs(b));
	}
	else if (!solved)
	{
		std::cout << "No solution";
	}

	std::cout << std::endl;

	return 0;
}
