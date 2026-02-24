#include <iostream>
#include <cassert>

using namespace std;

void fun(int *a)
{
	for (int i = 1; a[i-1] != -1; i++) a[i-1] = i * i;
}

int main()
{
#ifdef NDEBUG

#else
    //Dulustan's tests
    {
        {
            int a[100000]{};
            a[25] = -1;
            fun(a);

            for (int i = 0; i < 25; ++i) {
                assert(a[i] == (i + 1) * (i + 1));
            }
        }

        {
            int a[100000]{};
            a[333] = -1;
            fun(a);

            for (int i = 0; i < 333; ++i) {
                assert(a[i] == (i + 1) * (i + 1));
            }
        }

        {
            int a[100000]{};
            a[2774] = -1;
            fun(a);

            for (int i = 0; i < 2774; ++i) {
                assert(a[i] == (i + 1) * (i + 1));
            }
        }

        cout << "SUCCESS 1!" << endl;
    }

    //Сделайте 3 теста
    //Student's tests
    {
        {
            int a[100000]{};
            a[99] = -1;
            fun(a);

            for (int i = 0; i < 99; ++i) {
                assert(a[i] == (i + 1) * (i + 1));
            }
        }

        {
            int a[100000]{};
            a[1] = -1;
            fun(a);

            for (int i = 0; i < 1; ++i) {
                assert(a[i] == (i + 1) * (i + 1));
            }
        }

        {
            int a[100000]{};
            a[0] = -1;
            fun(a);

            for (int i = 0; i < 0; ++i) {
                assert(a[i] == (i + 1) * (i + 1));
            }
        }

        cout << "SUCCESS 2!" << endl;
    }

#endif
}
