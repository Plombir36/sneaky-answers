#include <iostream>
#include <cassert>

using namespace std;

void sort3(double *a, double *b, double *c)
{
	double temp;

	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}

	if (*a > *c)
	{
		temp = *a;
		*a = *c;
		*c = temp;
	}

	if (*b > *c)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}
}

int main()
{
#ifdef NDEBUG

	double a, b, c;

	cin >> a >> b >> c;

	sort3(&a, &b, &c);

	cout << a << ' ' << b << ' ' << c << endl;

#else

    //Dulustan's tests
    {
        {
            double a=1, b=2, c=3;
            sort3(&a,&b,&c);
            assert(a==1 && b==2 && c==3);
        }
        
        {
            double a=-1, b=-2, c=-3;
            sort3(&a,&b,&c);
            assert(a==-3 && b==-2 && c==-1);
        }

        {
            double a=100, b=-10000, c=3.14;
            sort3(&a,&b,&c);
            assert(a==-10000 && b==3.14 && c==100);
        }

        cout << "SUCCESS 1!" << endl;
    }

    //Сделайте 3 теста
    //Student's tests
    {        
        {
            double a=2, b=3, c=4;
            sort3(&a,&b,&c);
            assert(a==2 && b==3 && c==4);
        }
        
        {
            double a=0, b=-1, c=-2;
            sort3(&a,&b,&c);
            assert(a==-2 && b==-1 && c==0);
        }

        {
            double a=100, b=100, c=3.14;
            sort3(&a,&b,&c);
            assert(a==3.14 && b==100 && c==100);
        }
        cout << "SUCCESS 2!" << endl;
    }

#endif
}
