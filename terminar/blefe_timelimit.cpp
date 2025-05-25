// time limit error

#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
	
	int n, m;
	cin >> n >> m;
	int * a = new int[n];
	int * b = new int[m];
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<m; i++)
		cin >> b[i];

	int * ok = new int[m];

	for(int i=m-1; i>=0; i--)
	{
		ok[i] = 0;
		for(int j=0; j<n; j++)
		{
			if(a[j] == b[i])
			{
				ok[i] = 1;
				break;
			} 
		}

		if(ok[i] == 0)
		for(int j=0; j<i; j++)
			for(int g=0; g<i; g++)
			{
				if(b[j] + b[g] == b[i])
				{
					ok[i] = 1;
					break;
				}
			}
		if(ok[i] == 0)
		{
			cout << b[i] << endl;
			return 0;
		}
	}

	cout << "sim\n";

	delete [] a;
	delete [] b;
	return 0;
}
