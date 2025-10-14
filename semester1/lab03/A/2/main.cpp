#include <iostream>

int main(void)
{
	int n;
	double r, a;

	std::cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> a;
		r += a * a;
	}

	std::cout << r / n << std::endl;

	return 0;
}
