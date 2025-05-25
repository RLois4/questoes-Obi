// nao terminado

#include <iostream>
#include <cstring>
#include <cstdbool>
using namespace std;

int tonum(char napolitan)
{
	switch (napolitan) {
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
	}
}

bool hasHigher(char[] s)
{
	ch = *s;
	for(int i=1; i<strlen(s); i++)
	{
		if(tonum(ch) < tonum(s[i]))
			return true;
	}
	return false;
}

int main()
{
	char s[1000000];
	for(int i=0; i<strlen(s); i++)
	{

	}
}
