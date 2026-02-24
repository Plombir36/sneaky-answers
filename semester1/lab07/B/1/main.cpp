#include <iostream>
#include <vector>
#include <iterator>

#define SOLVE_A

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

#ifdef SOLVE_A

void solve(std::vector<int> &v)
{
	std::vector<int> n;
	int sum = v[0];

	for (auto it = v.begin() + 1; it < v.end(); std::advance(it, 1))
	{
		if (*it >= 0 && *(it-1) >= 0 || *it < 0 && *(it-1) < 0)
		{
			sum += *it;
		}
		else
		{
			n.push_back(sum);
			sum = *it;
		}
	}

	v = n;
}

#else
#ifdef SOLVE_B

void solve(std::vector<int> &v)
{
	int sum = v[0], index = 0;
	auto first = v.begin();

	for (auto it = v.begin() + 1; it < v.end(); std::advance(it, 1))
	{
		if (*it >= 0 && *(it-1) >= 0 || *it < 0 && *(it-1) < 0)
		{
			sum += *it;
		}
		else
		{
			v.erase(first, it-1);
			v.insert(v.begin() + index++, sum);
			it -= std::distance(first, it);
			first = it;
			sum = *it;
		}
	}
}

#else

#endif
#endif

int main(void)
{
	std::vector<int> v = { 1, 2, 3, -1, -2, 1, -1 };

	solve(v);

	for (auto i : v)
		std::cout << i << ' ';
	std::cout << std::endl;

	return 0;
}
