#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<vector<int>> solve(vector<vector<int>> v)
{
	int n = v.size();
	vector<vector<int>> out(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			out[n-1-j][i] = v[i][j];
		}
	}

	return out;
}

//main отвечает за ввод-вывод
int main()
{
#ifdef NDEBUG

	vector<vector<int>> inp, outp; 
	inp = {{1,2}, {3, 4}};
	solve(inp);
	for (auto i : out)
	{
		for (auto j : i)
			cout << j << ' ';
		cout << endl;
	}

#else

    //Dulustan's tests
    {
        vector<vector<int>> inp, outp; 
        inp = {{1,2}, {3, 4}};
        outp = {{2,4}, {1,3}};
        assert(solve(inp) == outp);

        inp = {{6,6,6}, {9,9,9},{1,2,3}};
        outp = {{6,9,3}, {6,9,2},{6,9,1}};
        assert(solve(inp) == outp);

        inp = {{11,12,13,14},{15,16,17,18},{19,20,21,22},{23,24,25,26}};
        outp = {{14,18,22,26},{13,17,21,25},{12,16,20,24},{11,15,19,23}};
        assert(solve(inp) ==  outp);

		cout << "SUCCESS 1!" << endl;
    }

    //придумайте по одному тесту 5x5 и 6x6
    //Student's tests
    {
        vector<vector<int>> inp, outp; 

        inp = {{6,6,6,6,6}, {9,9,9,9,9}, {1,2,3,4,5}, {1,2,3,4,5},{4,5,6,7,8}};
        outp = {{6,9,5,5,8}, {6,9,4,4,7},{6,9,3,3,6},{6,9,2,2,5},{6,9,1,1,4}};
        assert(solve(inp) == outp);

        inp = {{11,12,13,14,15,16},{15,16,17,18,19,20},{19,20,21,22,23,24},{23,24,25,26,27,28},{27,28,29,30,31,32},{31,32,33,34,35,36}};
        outp = {{16,20,24,28,32,36}, {15,19,23,27,31,35},{14,18,22,26,30,34},{13,17,21,25,29,33},{12,16,20,24,28,32},{11,15,19,23,27,31}};
        assert(solve(inp) ==  outp);
		cout << "SUCCESS 2!" << endl;
    }
#endif
}
