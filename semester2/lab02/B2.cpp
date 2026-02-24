#include <iostream>
#include <cctype>
#include <cassert>

using namespace std;

int wordcount(char *s)
{
	int c = 1;

	if (*s == '\0')
		return 0;

	for (s++; *s != '\0'; s++)
	{
		if (isgraph(*s) && isspace(*(s-1)))
			c++;
	}

	return c;
}

int main()
{
#ifdef NDEBUG

	char s[100] = "captain,             oh captain!!  ";
	cout << wordcount(s) << endl;

#else
    //Dulustan's tests
    {
        {
            char s[100] = "a bcd ef gg!";
            assert(wordcount(s) == 4);
        }
        
        {
            char s[100] = "captain,             oh captain!!           ";
            assert(wordcount(s) == 3);
        }

        {
            char s[100] = "x xx xxx xxxxxxxxx x x x";    
            assert(wordcount(s) == 7);
        }

        cout << "SUCCESS 1!" << endl;
    }

    //Сделайте 3 теста
    //Student's tests
    {        
        {
            char s[100] = "ioncewasbannedonastarwarsrpserverforcapitalism";
            assert(wordcount(s) == 1);
        }
        
        {
            char s[100] = "whoa\nwhoa	whoa";
            assert(wordcount(s) == 3);
        }

        {
            char s[100] = "";    
            assert(wordcount(s) == 0);
        }
        cout << "SUCCESS 2!" << endl;
    }

#endif
}
