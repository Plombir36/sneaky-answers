#include <iostream>
#include <cassert>

using namespace std;

int main()
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	char *pos = alp;
	char s[1000];
	cin.getline(s, 1000);

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '*')
		{
			s[i] = *pos;
			if (*pos == 'z')
				pos = alp;
			else
				pos++;
		}
	}

	cout << s << endl;
}
