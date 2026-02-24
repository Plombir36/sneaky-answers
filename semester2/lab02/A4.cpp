#include <iostream>
#include <cassert>

using namespace std;

bool is_pal(int *a, int n)
{
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		if (a[i] != a[j]) return false;
	}

	return true;
}

int main()
{
#ifdef NDEBUG

#else
    //Dulustan's tests
    {
        {
            int a[]{1,2,3,2,1};        
            assert(is_pal(a, 5));
        }
        
        {
            int a[]{1,-2,3,4,999,4,3,-2,1};        
            assert(is_pal(a, 9));
        }
        
        {
            int a[]{1,2,3,3,1};        
            assert(!is_pal(a, 5));
        }
                
        {
            int a[]{-77,23,365,366,23,-77};        
            assert(!is_pal(a, 6)); 
        }        

        cout << "SUCCESS 1!" << endl;
    }

    //Сделайте 2 позитивных и 2 негативных теста
    //Student's tests
    {        
        {
            int a[]{-1,0,1,0,-1};        
            assert(is_pal(a, 5));
        }
        
        {
            int a[]{4,1,6,7,1002,7,6,1,4};        
            assert(is_pal(a, 9));
        }
        
        {
            int a[]{-3,-2,-1,-3};        
            assert(!is_pal(a, 4));
        }
                
        {
            int a[]{-27,74,73,-27};        
            assert(!is_pal(a, 4)); 
        }        
        cout << "SUCCESS 2!" << endl;
    }

#endif
}
