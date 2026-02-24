#include <iostream>
#include <vector>
#include <iterator>

void solve(std::vector<int> &a)
{
	for (auto it = a.begin(); it != a.end(); std::advance(it, 3))
	{
		auto temp = *it;
		*it = *(it+1);
		*(it+1) = *(it+2);
		*(it+2) = temp;
	}
}

int main(void)
{
	std::vector<int> a;
	int n;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		a.push_back(temp);
	}

	solve(a);

	for (auto i : a)
		std::cout << i << ' ';
	std::cout << std::endl;

	return 0;
}
