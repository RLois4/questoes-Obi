#include <iostream>
using namespace std;

int v[100005];

int main() {
	int n, q=0, s=0; cin >> n;
	for(int i=0; i<n; i++) {
		int k;
		cin >> k;
		if(k != 0) {v[i] = k; q++;}
		if(k == 0) {i-=2; n-=2; q--;}
	}
	for(int i=0; i<q; i++) s += v[i];
	cout << s << '\n';
}
