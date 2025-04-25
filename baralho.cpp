#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
short show(short K[])
{
	int val = 0;
	for(int i=0; i<13; i++)
	{
		if(K[i] == 0)
			val++;
		if(K[i] > 1)
		{
			printf("erro\n");
			return -1;
		}
	}
	return val;
}
int main()
{
	char input[157];
	short E[13] = {0};
	short P[13] = {0};
	short C[13] = {0};
	short U[13] = {0};
	char letter[4];
	char num[3];
	cin >> input;
	short value;
	for(int i=0; i<strlen(input)/3; i++)
	{
		strncpy(letter, &input[i*3], 3);
		letter[3] = 0;
		strncpy(num, letter, 2);
		value = atoi(num);
		switch (letter[2]) {
			case 'E':
				E[value-1]++;
				break;
			case 'P':
				P[value-1]++;
				break;
			case 'C':
				C[value-1]++;
				break;
			case 'U':
				U[value-1]++;
		}
	}
	if(show(C) != -1)
	{
		printf("%d\n", show(C));
	}
		if(show(E) != -1)
	{
		printf("%d\n", show(E));
	}
		if(show(U) != -1)
	{
		printf("%d\n", show(U));
	}
		if(show(P) != -1)
	{
		printf("%d\n", show(P));
	}
}
