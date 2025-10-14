#include <iostream>

int main(void)
{
	int n, a, b;
	bool found = false;

	std::cin >> n;
	std::cin >> b;

	for (int i = 0; i < n - 1; i++)
	{
		a = b;
		std::cin >> b;

		if (b % a == 0)
		{
			std::cout << b << std::endl;
			found = true;
		}
	}

	if (!found)
	{
		std::cout << "nothing" << std::endl;
	}

	return 0;
}
