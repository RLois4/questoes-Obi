#include <iostream>
using namespace std;
int main()
{
	int N, T;
	cin >> N >> T;
	if(T == 0)
		cout << N;
	if(T == 1)
		cout << N * (N-1);
	if(T == 2)
		// pegar 3 casas e a cada 6 combinacoes de 3 casas, 4 ta errada e 1 ta repetida, entao divide por 6
		cout << (N)*(N-1)*(N-2)/6;
	return 0;
}
