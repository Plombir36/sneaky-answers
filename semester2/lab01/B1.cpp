#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int solve(vector<vector<int>> v)
{
	int max = 0;

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0, c = 0; j < v[0].size(); j++)
		{
			if (v[i][j] == 1)
				break;

			for (int n = i; n < v.size(); n++, c++) 	{ if (v[n][j] == 1) break; } // down
			max = c > max ? c : max; c = 0;
			for (int n = i; n > 0; n--, c++)			{ if (v[n][j] == 1) break; } // up
			max = c > max ? c : max; c = 0;
			for (int n = j; n < v[0].size(); n++, c++) 	{ if (v[i][n] == 1) break; } // right
			max = c > max ? c : max; c = 0;
			for (int n = j; n > 0; n--, c++)			{ if (v[i][n] == 1) break; } // left
			max = c > max ? c : max; c = 0;

			for (int n = i; n < v.size(); n++, c++) 	{ if (v[n][j+c+1] == 1 || j+c+2 >= v[0].size()) break; } // down-right
			max = c > max ? c : max; c = 0;
			for (int n = i; n < v.size(); n++, c++) 	{ if (v[n][j-c-1] == 1 || j-c-2 <= 0) break; }			 // down-left
			max = c > max ? c : max; c = 0;
			for (int n = i; n > 0; n--, c++) 			{ if (v[n][j+c+1] == 1 || j+c+2 >= v[0].size()) break; } // up-right
			max = c > max ? c : max; c = 0;                                                      
			for (int n = i; n > 0; n--, c++) 			{ if (v[n][j-c-1] == 1 || j-c-2 <= 0) break; }			 // up-left
			max = c > max ? c : max; c = 0;
		}
	}

	return max;
}


//main отвечает за ввод-вывод
int main()
{
#ifdef NDEBUG

	cout << solve({{1, 0, 0}, {1, 0, 0}, {1, 0, 0}}) << endl;

#else
    //Dulustan's tests
    {
        vector<vector<int>> inp; 
        inp = {{1,1,1}, {1,1,1}, {1,1,1}};
        assert(solve(inp) == 0);

        inp = {{1,0,0,1}, {0,0,1,1}, {0,1,0,1}, {1,0,1,0}};
        assert(solve(inp) == 3);

        inp = {{1,1,1},{1,0,1}, {1,0,1}};
        assert(solve(inp) ==  2);

        inp = {{1,0,0,1,0},{0,1,0,0,1},{1,1,0,1,1},{1,0,1,1,1},{1,0,0,0,1}};
        assert(solve(inp) == 4 );

		cout << "SUCCESS 1!" << endl;
    }

    //придумайте по одному тесту 4x4 и 6x6
    //Student's tests
    //{
        
    //}
#endif
}
