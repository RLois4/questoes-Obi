#include <iostream>
using namespace std;

int main() {
	int a, b, v=0, i;
	cin >> a >> b;
	for(i=0; i<a; i++) {
		
		while(b-- != 1) {
			if(!(a%2)) a /= 2;
			else a = a/2 + 1;
			v++;
		}
		
		int k = a/2;
		if(a%2) k++;

		v += k;

		cout << k << endl;
		

		return 0;
	}
}
