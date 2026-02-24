#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

#define find_money(s) strstr(s, "money")

int main()
{
#ifdef NDEBUG



#else
    //Dulustan's tests
    {
        {
            char s[]{"thereisnomonyhere"};
            assert(find_money(s) == nullptr);
        }

        {
            char s[]{"woohoo, money!"};
            assert(find_money(s) == s + 8);
        }

        {
            char s[]{"wait, money here, money there, which one is correct?"};
            assert(find_money(s) == s + 6);
        }

        cout << "SUCCESS 1!" << endl;
    }

    //Сделайте 3 теста
    //Student's tests
    {
		{
            char s[]{"Money"};
            assert(find_money(s) == nullptr);
        }

        {
            char s[]{"m o n e y money"};
            assert(find_money(s) == s + 10);
        }

        {
            char s[]{"bobby loves money"};
            assert(find_money(s) == s + 12);
        }
        cout << "SUCCESS 2!" << endl;
    }

#endif
}
