#include <iostream>
#include <cmath>

int main(void)
{
	int L, R;

	std::cin >> L >> R;

	for (; L <= R; L++)
	{
		unsigned int n, sum = 1, prev_sum = 0;
		for (int j = 1; sum != prev_sum; j++)
		{
			prev_sum = sum;
			sum = 0;
			n = L;

			while (n != 0)
			{
				sum += std::pow(n % 10, j);
				n /= 10;
			}

			if (sum == L)
				std::cout << L << ' ';

			if (sum >= L)
				break;
		}
	}

	std::cout << std::endl;

	return 0;
}
