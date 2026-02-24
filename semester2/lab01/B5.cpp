#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int p, n, y, x; cin >> n >> y >> x; p = n;
	vector<vector<char>> v(n, vector<char>(n, '.'));

	if (n <= 0 || x > n || y > n || x < 0 || y < 0)
	{
		cout << "Парад уродов" << endl;
		return 1;
	}

	v[--y][--x] = 'Q';

	for (int i = 1; y - i >= 0; i++) v[y - i][x] = '*';
	for (int i = 1; y + i < n; i++) v[y + i][x] = '*';
	for (int i = 1; x - i >= 0; i++) v[y][x - i] = '*';
	for (int i = 1; x + i < n; i++) v[y][x + i] = '*';

	for (int i = 1; y - i >= 0 && x - i >= 0; i++) { v[y-i][x - i] = '*'; }
	for (int i = 1; y + i < n && x - i >= 0; i++) { v[y+i][x - i] = '*'; }
	for (int i = 1; y - i >= 0 && x + i < n; i++) { v[y-i][x + i] = '*'; }
	for (int i = 1; y + i < n && x + i < n; i++) { v[y+i][x + i] = '*'; }

	for (auto i : v)
	{
		for (auto j : i)
			cout << j << ' ';
		cout << endl;
	}
}
