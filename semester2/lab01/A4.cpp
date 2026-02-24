#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<vector<int>> solve(vector<vector<int>> v)
{
	for (int i = 0; i < v[0].size(); i++)
	{
		int  min = INT_MAX;

		for (int j = 0; j < v.size(); j++)
		{
			if (v[j][i] < min)
			{
				min = v[j][i];
			}
		}

		for (int j = 0; j < v.size(); j++)
		{
			if (v[j][i] == min)
			{
				v[j][i] -= 1;
			}
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		int max = INT_MIN;

		for (int j = 0; j < v[0].size(); j++)
		{
			if (v[i][j] > max)
			{
				max = v[i][j];
			}
		}

		for (int j = 0; j < v[0].size(); j++)
		{
			if (v[i][j] == max)
				v[i][j] *= 2;
		}
	}

	return v;
}

int main()
{
#ifdef NDEBUG

	for (auto i : solve({{5, 5, 4, -1}, {6,0,7,2}, {0,-10,-2,-1}}))
	{
		for (auto j : i)
			cout << j << ' ';
		cout << endl;
	}

#else
    //Dulustan's tests
    {
        vector<vector<int>> inp, outp; 
        
        inp = {{5,5,4,-1}, {6,0,7,2}, {0,-10,-2,-1}};
        outp = {{10,10,4,-2}, {6,0,14,2}, {-2,-11,-3,-2}};
        assert(solve(inp) == outp );

        inp = {{10,10,10},{10,10,10}, {10,10,10}};
        outp = {{18,18,18},{18,18,18}, {18,18,18}};
        assert(solve(inp) == outp );

        inp = {{1,2,3,4,5},{6,7,8,9,10}};
        outp = {{0,1,2,3,8},{6,7,8,9,20}};
        assert(solve(inp) == outp );

		cout << "SUCCESS 1!" << endl;
    }

    //придумайте три хороших теста
    //Student's tests
    //{
        
    //}
#endif
}
