#include <iostream>
#include <cstring>
using namespace std;

char s[1000005];
int v[1000005];
int al[1000005];

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
		default:
			return -1;
	}
}

int main()
{
	int val=0;
	cin >> s;
	unsigned sz = strlen(s);
	for(int i=0; i<sz; i++) {
		al[i] = v[i] = tonum(s[i]);
	}

	for(int i=0; i<sz; i++)	{
		for(int j=i+1; j<sz; j++) {
			if(v[j] > v[i]) {
				al[j] -= al[i];
				al[i] = 0;
				break;
			}
		}
		val += al[i];
	}

	cout << val << endl;

	return 0;
}
