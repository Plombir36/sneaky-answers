#include <iostream>
#include <vector>

using namespace std;

#define reachable(k) reachable_(n, k)

int clamp(int min, int max, int n)
{
	if (n < min) return min;
	if (n > max) return max;
	return n;
}

int reachable_(int max, int n)
{
	return clamp(0, max, n) == n;
}

int main()
{
	int n, y, x; cin >> n >> y >> x;
	vector<vector<char>> v(n, vector<char>(n, '.'));
	v[--y][--x] = 'K';

	if (reachable(x + 2) && reachable(y + 1)) v[y + 1][x + 2] = '*';
	if (reachable(x + 2) && reachable(y - 1)) v[y - 1][x + 2] = '*';
	if (reachable(x - 2) && reachable(y + 1)) v[y + 1][x - 2] = '*';
	if (reachable(x - 2) && reachable(y - 1)) v[y - 1][x - 2] = '*';
	if (reachable(x + 1) && reachable(y + 2)) v[y + 2][x + 1] = '*';
	if (reachable(x + 1) && reachable(y - 2)) v[y - 2][x + 1] = '*';
	if (reachable(x - 1) && reachable(y + 2)) v[y + 2][x - 1] = '*';
	if (reachable(x - 1) && reachable(y - 2)) v[y - 2][x - 1] = '*';

	for (auto i : v)
	{
		for (auto j : i)
			cout << j << ' ';
		cout << endl;
	}
}
