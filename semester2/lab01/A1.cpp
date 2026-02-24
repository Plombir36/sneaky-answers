#define NDEBUG
#include<cassert>


//main отвечает за ввод-вывод
int main()
{

    //Dulustan's tests
    {
        vector<vector<int>> outp; 
        
        outp = {{1,2}};
        assert(solve(1,2) == outp );

        outp = {{1},{2},{3},{4},{5}};
        assert(solve(5,1) == outp);

        outp = {{1,4,7,10}, {2,5,8,11}, {3,6,9,12}};
        assert(solve(3,4) == outp);

        outp = {{1,7,13}, {2,8,14}, {3,9,15}, {4,10,16}, {5,11,17}, {6,12,18}};
        assert(solve(6,3) == outp);    
    }

    //доделайте эти тесты
    //Student's tests
    // {
    //     outp = ?
    //     assert(solve(8,8) == outp);

    //     outp = ?
    //     assert(solve(5,11) == outp);    

    //     outp = ?
    //     assert(solve(10,4) == outp);      
    // }
}
