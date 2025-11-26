#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

void solve(std::vector<int> &a)
{
	std::vector<int> b;
	int min = INT_MAX, max = INT_MIN;

	for (auto i : a)
	{
		if (i < min)
			min = i;
		if (i > max)
			max = i;
	}

	for (auto i : a)
	{
		if (i == max || i == max - 1 || i == min || i == min + 1)
			b.push_back(i);
	}

	a = b;
}

int main(void)
{
#ifdef NDEBUG

	std::vector<int> v;

	v = {1,3,5,4,2,6};
	solve(v);

	for (auto i : v)
		std::cout << i << ' ';

	std::cout << std::endl;

#else

    {
        std::vector<int> v;
        
        v = {1,3,5,4,2,6};
        solve(v);
        assert(v == std::vector<int>({1,5,2,6}));    
        
        v = {6,4,6,7,0,1,0,3};
        solve(v);
        assert(v == std::vector<int>({6,6,7,0,1,0}));    

        v = {-1,0,-5,-9,-2,-10,-6,-9};
        solve(v);
        assert(v == std::vector<int>({-1,0,-9,-10,-9}));  

        v = {777,776,778,7,7,8};
        solve(v);
        assert(v == std::vector<int>({777,778,7,7,8}));  

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        std::vector<int> v;

        v = {1, 2};
        solve(v);
        assert(v == std::vector<int>({1, 2}));  

        v = {1};
        solve(v);
        assert(v == std::vector<int>({1}));  

        v = {-11, -10, -12, 10, 11, 9};
        solve(v);
        assert(v == std::vector<int>({-11, -12, 10, 11}));  

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
