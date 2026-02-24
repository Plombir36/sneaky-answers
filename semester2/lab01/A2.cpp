#define NDEBUG
#include<cassert>


//main отвечает за ввод-вывод
int main()
{
    //Dulustan's tests
    {
        vector<vector<char>> outp; 

        outp = {{'b','w'}};
        assert(solve(1,2) == outp );

        outp = {{'b'},{'w'},{'b'},{'w'},{'b'}};
        assert(solve(5,1) == outp);

        outp = {{'b','w','b','w'}, {'w','b','w','b'}, {'b','w','b','w'}};
        assert(solve(3,4) == outp);

        outp = {{'b','w','b'}, {'w','b','w'}, {'b','w','b'}, {'w','b','w'}, {'b','w','b'}, {'w','b','w'}};
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
