#include <iostream>

using namespace std;

int main()
{
	int n, k, v=0;
	bool d;
	cin >> n >> k;
	
	int * vet = new int[k];
	
	for(int i=0; i<k;)
	{
		cin >> vet[i++];
	}

	for(int i=1; i<=n; i++)
	{
		d = true;
		for(int j=0; j<k; j++)
		{
			if(i % vet[j] == 0) d = false;
		}
		if(d) v++;
	}

	cout << v << endl;

	delete [] vet;
	return 0;
}
