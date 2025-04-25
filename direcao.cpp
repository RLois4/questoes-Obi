#include <iostream>

using namespace std;

#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)

int main (int argc, char *argv[]) {
	char input1[20];
	char input2[20];
	scanf("%s%s", &input1, &input2);

	int l = 0;
	int n = 90;
	int o = 180;
	int s = 270;

	int a,b;
	switch (input1[0]) {
		case 'n':
			a = n;
			break;
		case 's':
			a = s;
			break;
		case 'l':
			a = l;
			break;
		case 'o':
			a = o;
			break;
	}
	switch (input2[0]) {
		case 'n':
			b = n;
			break;
		case 's':
			b = s;
			break;
		case 'l':
			b = l;
			break;
		case 'o':
			b = o;
			break;
	}

	int ang = MAX(a,b) - MIN(a,b);
	
	cout << ang << endl;

	return 0;
}
