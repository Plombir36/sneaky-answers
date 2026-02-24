#include "utils.hpp"

template<typename T>
void parr(std::vector<T> a)
{
	for (auto i : a)
		std::cout << i << ' ';

	std::cout << std::endl;
}
