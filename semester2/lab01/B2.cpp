#include <iostream>
#include <vector>
#include <cfloat>
#include <cassert>

using namespace std;

double solve(vector<vector<double>> v)
{
	double max = DBL_MIN, min = DBL_MAX, ret = 0;
	vector<double> a(v.size()), b(v.size());

#ifdef NDEBUG
	for (auto i : v)
	{
		for (auto j : i)
			cout << j << ' ';
		cout << endl;
	}
#endif

	cout << endl;

	for (int i = 0; i < v.size(); i++) for (int j = 0; j < v.size(); j++) max = v[i][j] > max ? v[i][j] : max; // line
	for (int i = 0; i < v.size(); i++) for (int j = 0; j < v.size(); j++) min = v[j][i] < min ? v[j][i] : min; // column

	for (int i = 0; i < v.size(); i++) for (int j = 0; j < v.size(); j++) if (v[i][j] == max) for (int n = 0; n < v.size(); n++) a[n] = v[i][n];
	for (int i = 0; i < v.size(); i++) for (int j = 0; j < v.size(); j++) if (v[j][i] == min) for (int n = 0; n < v.size(); n++) b[n] = v[n][i];

	for (int i = 0; i < v.size(); i++) ret += a[i] * b[i];

#ifdef NDEBUG
	cout << "min: " << min << endl << "max: " << max << endl << endl;
	for (auto i : a) cout << i << ' '; cout << endl;
	for (auto i : b) cout << i << ' '; cout << endl << endl;
#endif

	return ret;
}

//main отвечает за ввод-вывод
int main()
{
#ifdef NDEBUG

        vector<vector<double>> inp; 

        inp = {{6,-10,8,22},{100,1,0,-1}, {11,17,7,91},{31,32,33,34}};

		cout << solve(inp) << endl;

#else
    //Dulustan's tests
    {
        vector<vector<double>> inp; 
        inp = {{1,2,3}, {4,5,6}, {7,8,9}};
        assert(solve(inp) == 102);

        inp = {{1,2}, {3,4}};
        assert(solve(inp) == 15);

        inp = {{6,-10,8,22},{100,1,0,-1}, {11,17,7,91},{31,32,33,34}};
        assert(solve(inp) ==  -1031);

		cout << "SUCCESS 1!" << endl;
    }

    //придумайте по одному тесту 4x4 и 6x6
    //Student's tests
    //{
        
    //}
#endif
}
