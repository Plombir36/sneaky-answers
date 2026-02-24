#include <iostream>
#include <cassert>

using namespace std;

int range(int *a, int n)
{
	int min = *a, max = *a;

	for (int i = 1; i < n; i++)
	{
		if (a[i] < min) min = a[i];
		if (a[i] > max) max = a[i];
	}

	return max - min;
}

int main()
{   
#ifdef NDEBUG

#else
   //Dulustan's tests
    {
        {
            int a[] = {1,2,3,4,5,6,7};               
            assert(range(a, 7)==6);
        }
        
        {
            int a[] = {-1,99,-5,4,28,-99,66,0};               
            assert(range(a, 8)==198);
        }        

        {
            int a[] = {1000,1000,1000,1000};               
            assert(range(a, 4)==0);
        }        

        cout << "SUCCESS 1!" << endl;
    }

    //Сделайте 3 теста
    //Student's tests
    {        
        {
            int a[] = {7, 6, 5, -1, -2, -3};               
            assert(range(a, 6)==10);
        }
        
        {
            int a[] = {99};               
            assert(range(a, 1)==0);
        }        

        {
            int a[] = {-1, -2, -3};               
            assert(range(a, 3)==2);
        }        
        cout << "SUCCESS 2!" << endl;
    }


#endif
}
