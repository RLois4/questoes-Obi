#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<int> nv;
unordered_set<int> mv;
int b[10005];
int main() {
	int n, m, i=0, aux, temp=0;
	cin >> n >> m;
	
	for(i=0;i<n;i++) {
		cin >> aux;
		nv.insert(aux);
	}
		
	for(i=0;i<m;i++) {
		cin >> b[i];

		if( nv.find(b[i]) == nv.end() ) {
			temp = 0;
			for(int j=0; j<i; j++) {
				if( mv.find(b[i] - b[j]) != mv.end() ) {
					temp = 1;
					break;
				}
			}
			if(temp!=1) {
				cout << b[i] << endl;
				return(0);
			}
		}

		mv.insert(b[i]);
	}

	cout << "sim\n";
	return 0;
}
