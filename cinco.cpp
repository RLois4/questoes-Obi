#include <iostream>
using namespace std;

int alg[10005];

int main() {
	int n;
	int maior5=0;
	int maior0=0;
	int has0=0;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> alg[i];
		if(alg[i] == 0) has0=1;
	}

	if(alg[n-1] > 5) maior5=1;

	if(maior5)
	for(int i=0; i<n; i++) {
		if(alg[i] == 5 || alg[i] == 0) {
			int aux = alg[i];
			alg[i] = alg[n-1];
			alg[n-1] = aux;
			for(int j=0; j<n-1; j++) {
				cout << alg[j] << " ";
			}
			cout << alg[n-1] << endl;
			return 0;
		}
	}

	if(has0)
	for(int i=0; i<n; i++) {
		if(alg[i] == 0) {
			int aux = alg[i];
			alg[i] = alg[n-1];
			alg[n-1] = aux;
			for(int j=0; j<n-1; j++) {
				cout << alg[j] << " ";
			}
			cout << alg[n-1] << endl;
			return 0;
		}
		
	}

	for(int i=n-1; i>0; i--) {
		if(alg[i] == 5) {
			int aux = alg[i];
			alg[i] = alg[n-1];
			alg[n-1] = aux;
			for(int j=0; j<n-1; j++) {
				cout << alg[j] << " ";
			}
			cout << alg[n-1] << endl;
			return 0;
		}
	}

	cout << -1 << endl;
	return 0;

}
