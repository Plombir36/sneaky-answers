#include <iostream>
#include <cassert>

using namespace std;

bool isvowel(char c)
{
	char vowels[] = "AaEeIiOoUuYy";

	for (int i = 0; i < sizeof(vowels); i++)
	{
		if (vowels[i] == c)
			return true;
	}

	return false;
}

void onlyvowels(char *s, char *t)
{
	for (int i = 0, j = 0; s[i] != '\0'; i++)
	{
		if (isvowel(s[i]))
			t[j++] = s[i];
	}
}

int main()
{
#ifdef NDEBUG

#else
    //Dulustan's tests
    {
        {
            char s[]{"shinzowosasageyou"}, s1[100000]{}, ans[100000]{"iooaaeyou"};
            onlyvowels(s, s1);

            for (int i = 0; i < 99999; ++i) {
                assert(s1[i] == ans[i]);
            }
        }

        {
            char s[]{"aeyouiaoeuioaueieieuieiueuaooa"}, s1[100000]{}, ans[100000]{"aeyouiaoeuioaueieieuieiueuaooa"};
            onlyvowels(s, s1);

            for (int i = 0; i < 99999; ++i) {
                assert(s1[i] == ans[i]);
            }
        }

        {
            char s[]{"qrpvnbnhghhjjrttqkjkjkjkqqwwr"}, s1[100000]{}, ans[100000]{""};
            onlyvowels(s, s1);

            for (int i = 0; i < 99999; ++i) {
                assert(s1[i] == ans[i]);
            }
        }

        cout << "SUCCESS 1!" << endl;
    }

    //Сделайте 3 теста
    //Student's tests
    {
        {
            char s[]{"jetstream sam"}, s1[100000]{}, ans[100000]{"eeaa"};
            onlyvowels(s, s1);

            for (int i = 0; i < 99999; ++i) {
                assert(s1[i] == ans[i]);
            }
        }

        {
            char s[]{"iyoumeyoumeyou"}, s1[100000]{}, ans[100000]{"iyoueyoueyou"};
            onlyvowels(s, s1);

            for (int i = 0; i < 99999; ++i) {
                assert(s1[i] == ans[i]);
            }
        }

        {
            char s[]{"gggrrr"}, s1[100000]{}, ans[100000]{""};
            onlyvowels(s, s1);

            for (int i = 0; i < 99999; ++i) {
                assert(s1[i] == ans[i]);
            }
        }
        cout << "SUCCESS 2!" << endl;
    }

#endif
}
