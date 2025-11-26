#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> solve(std::vector<int> a)
{
	auto size = a.size();

	for (size_t i = 1; i < size; i += 2)
	{
		auto temp = a[i];
		a[i] = a[i-1];
		a[i-1] = temp;
	}

	return a;
}

int main()
{
#ifdef NDEBUG

	std::vector<int> arr;
	int size;

	std::cin >> size;

	for (auto i = 0; i < size; i++)
	{
		int temp;

		std::cin >> temp;

		arr.push_back(temp);
	}

	for (auto i : solve(arr))
	{
		std::cout << i << ' ';
	}

	std::cout << std::endl;

#else

    {
        assert(solve({-1, 5, 0, 100}) == std::vector<int>({5, -1, 100, 0}));

        assert(solve({3, -1, 5, -7, 10, 36, -61, 88}) 
        == std::vector<int>({-1, 3, -7, 5, 36, 10, 88, -61}));

        assert(solve({3, 10, 22, -10, 76, -61, -123, -5, 7}) 
        == std::vector<int>({10, 3, -10, 22, -61, 76, -5, -123, 7}));
        
        assert(solve({-2022, 1039, -3039, -2023, -2024, 777, 361}) 
        == std::vector<int>({1039, -2022, -2023, -3039, 777, -2024, 361}));     

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
            
        assert(solve({3, -1, 5, -7, 10, 36, -61, 88}) 
        == std::vector<int>({-1, 3, -7, 5, 36, 10, 88, -61}));

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
