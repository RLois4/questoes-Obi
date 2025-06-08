#include <iostream>
using namespace std;
int v[100005];
int main() {
	int n,q,op,k,val,i;
	cin >> n >> q;
	for(i=0;i<n;i++) {
		cin >> v[i];
	}
	while(q--) {
		cin >> op;
		if(op == 1) {
			cin >> k;
			val=0;
			for(i=0; i<k; i++) {
				val += v[i];
			}
			cout << val << endl;
		} else {
			cin >> k >> val;
			v[k-1] = val;
		}
	}
	return 0;
}
