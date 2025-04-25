#include <iostream>
using namespace std;


char matriz[700][700];

void vazar(int vl, int vc)
{
	if(matriz[vl + 1][vc] == '.')
	{
		matriz[vl + 1][vc] = 'o';
		vazar(vl+1, vc);
	}
	if(matriz[vl][vc-1] == '.' && matriz[vl+1][vc] == '#')
	{
		matriz[vl][vc-1] = 'o';
		vazar(vl, vc-1);
	}
	if(matriz[vl][vc+1] == '.' && matriz[vl+1][vc] == '#')
	{
		matriz[vl][vc+1] = 'o';
		vazar(vl, vc+1);
	}
}

int main()
{
	int vl, vc;
	int l, c;
	cin >> l >> c;
	for(int i=0; i<l; i++)
		for (int j=0; j<c; j++) {
			cin >> matriz[i][j];
			if(matriz[i][j] == 'o')
			{
				vl = i;
				vc = j;
			}
		}

	vazar(vl, vc);

	cout << "\n\n";
	for(int i=0; i<l; i++){
		for (int j=0; j<c; j++) {
		 cout << matriz[i][j];
		}
		cout << endl;
	}
}
