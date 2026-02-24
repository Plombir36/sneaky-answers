#include <iostream>
#include <vector>
#include <iterator>

void my_insert(std::vector<int> &v, int x, int k)
{
	v.resize(v.size() + 1);

	for (auto it = v.rbegin(); it < v.rend() - k; std::advance(it, 1))
	{
		*(it-1) = *it;
	}

	v[k] = x;
}

void my_erase(std::vector<int> &v, int k)
{
	for (auto it = v.begin() + k; it < v.end(); std::advance(it, 1))
	{
		*it = *(it+1);
	}

	v.resize(v.size() - 1);
}

int main(void)
{
	std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7 };

	solve(v, 2, 4);

	for (auto i : v)
		std::cout << i << ' ';
	std::cout << std::endl;

	return 0;
}
