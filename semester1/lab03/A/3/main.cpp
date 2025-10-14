#include <iostream>

int main(void)
{
	int n, a, r, mx = -1 << (sizeof(int) * 8 - 1);

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a;

		if (a >= mx)
		{
			mx = a;
			r = i;
		}
	}

	std::cout << mx << ' ' << r << std::endl;

	return 0;
}
