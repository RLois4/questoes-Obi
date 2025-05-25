#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

char vogais[] = "aeiou";

bool isVogal(char ch)
{
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
	return false;
}

unsigned distVogal(int ch, int vg) // retorna a distanca entre uma letra e uma vogal
{
	unsigned dist = abs(ch - vg);
	if(26 - dist < dist) dist = 26 - dist;
	return dist;
}

char vmp(char ch) // retorna a vogal mais proxima
{
	char vg = 'a';
	unsigned menorDist = distVogal(ch, 'a');
	for(int i=1; i<5; i++)
	{
		if( distVogal(ch, vogais[i]) < menorDist)
		{
			menorDist = distVogal(ch, vogais[i]);
			vg = vogais[i];
		}
	}
	return vg;
}

void ngolonia(char ch) // mostra a cifra por essa letra
{
	cout << ch;
	char vg = vmp(ch);
	cout << vg;
	if( isVogal( (char)(ch+1) ) )
		cout << (char)(ch + 2);
	else cout << (char)(ch + 1);
}


int main()
{
	char palavra[35]; // maximo 30 letras + \0 para terminar string, mas em programacao competitiva sempre é bom usar a mais, 31 é suficiente
	cin >> palavra;
	for(int i=0; palavra[i] != '\0'; i++) // percorre cada letra do input
	{
		if(isVogal(palavra[i]))
			cout << palavra[i];
		else
			ngolonia(palavra[i]);
	}
	cout << '\n';
}
