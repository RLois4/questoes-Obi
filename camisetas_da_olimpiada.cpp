#include <iostream>
using namespace std;
int main (int argc, char *argv[]) {
	int n, t1 = 0, t2 = 0;
	cin >>n;
	for(int i=0; i<n; i++) {
		int aux;
		cin >> aux;
		if(aux == 1) {
			t1++;
		} else
			t2++;
	}
	int k,l;
	cin >> k >> l;
	if(k > t1 || l > t2) {
		cout << "N\n";
	} else {
		cout << "S\n";
	}
	return 0;
}
