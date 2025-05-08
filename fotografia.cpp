#include <bits/stdc++.h>
using namespace std;	

int main() {
	int a, l;
	cin >> a >> l;
	if (a < l) swap(a,l);
	int n, c,v, r=-2, m=0xffff;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> c >> v;
		if(c < v) swap(c,v);
		if(c>=a && v>=l) {
			if(c * v < m){
				m=c*v;
				r=i;
			}
		}
	}
	cout << r + 1 << '\n';
}