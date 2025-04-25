#include <iostream>
using namespace std;

typedef struct {
	char status = 'E'; // por enquanto nao recebeu nada, entao deixa como se ja tivesse enviado para nao somar nada.
	int time= 0; // valor sentila para os nao inicializados
} dados;

dados amigos[101];

void somarTempo(int t)
{
	for(int i=1; i<101; i++)
	{
		if(amigos[i].status == 'R')
		{
			amigos[i].time += t;
		}
	}
}

int main()
{
	int n;
	cin >> n;

	int id;
	char ch; // previous_ch serve para ver se o antigo foi T, se sim nao devo aumentar, 'O' para nao ser nada;
	for(int i=0; i<n; i++)
	{
		cin >> ch >> id;
		if(ch == 'T')
		{
			somarTempo(id - 1); // nesse caso id é tempo e nao o identificador do amigo.
			// id - 1 pq sempre adiciona +1 mesmo quando tem um T.
			continue;
		}
		
		// ocorre apenas se ch != 'T'
		amigos[id].status = ch;
		somarTempo(1);
	}

	// mostrando o tempo de cada amigo.
	for(int i=1; i<101; i++)
	{
		if(amigos[i].time != 0 && amigos[i].status == 'E')
			printf("%d %d\n", i, amigos[i].time);
		if (amigos[i].status == 'R')
			printf("%d -1", i);
	}
}
