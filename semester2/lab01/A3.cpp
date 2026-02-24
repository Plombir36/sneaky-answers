#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<vector<int>> &fill(vector<vector<int>> &v, int n, int m, int k)
{
	if (n > v.size() || m > v[0].size())
	{
		return v;
	}

	for (int i = v.size() - n; i < n; i++)
	{
		for (int j = v[0].size() - m; j < m; j++)
		{
			v[i][j] = k;
		}
	}

	return fill(v, n - 1, m - 1, k + 1);
}

vector<vector<int>> solve(int n, int m)
{
	vector<vector<int>> v(n, vector<int>(m));
	fill(v, n, m, 0);
	return v;
}

//main отвечает за ввод-вывод
int main()
{
#ifdef NDEBUG

	int n, m;
	cin >> n >> m;
	for (auto i : solve(n, m))
	{
		for (auto j : i)
			cout << j << ' ';
		cout << endl;
	}

#else

    {
        vector<vector<int>> outp; 
        
        outp = {{0,0,0,0}};
        assert(solve(1,4) == outp);

        outp = {{0,0,0},{0,1,0},{0,1,0},{0,1,0},{0,0,0}};
        assert(solve(5,3) == outp);

        outp = {{0,0,0,0,0,0}, {0,1,1,1,1,0}, {0,1,2,2,1,0},
        {0,1,2,2,1,0}, {0,1,1,1,1,0}, {0,0,0,0,0,0}};
        assert(solve(6,6) == outp);

		cout << "SUCCESS 1!" << endl;
    }

     {
         vector<vector<int>> outp; 
         outp = {{0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,0},{0,1,2,2,2,2,1,0},{0,1,2,3,3,2,1,0},{0,1,2,3,3,2,1,0},{0,1,2,2,2,2,1,0},{0,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0}};
         assert(solve(8,8) == outp);

         outp = {{0,0,0,0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,1,1,1,0},{0,1,2,2,2,2,2,2,2,1,0},{0,1,2,3,3,3,3,3,2,1,0},{0,1,2,2,2,2,2,2,2,1,0},{0,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0}};
         assert(solve(7,11) == outp);    

         outp = {{0,0,0,0,0,0,0,0,0,0,0,0},{0,1,1,1,1,1,1,1,1,1,1,0},{0,1,2,2,2,2,2,2,2,2,1,0},{0,1,2,3,3,3,3,3,3,2,1,0},{0,1,2,3,4,4,4,4,3,2,1,0},{0,1,2,3,4,4,4,4,3,2,1,0},{0,1,2,3,3,3,3,3,3,2,1,0},{0,1,2,2,2,2,2,2,2,2,1,0},{0,1,1,1,1,1,1,1,1,1,1,0},{0,0,0,0,0,0,0,0,0,0,0,0}};
         assert(solve(10,12) == outp);      

		 cout << "SUCCESS 2!" << endl;
     }
#endif
}
