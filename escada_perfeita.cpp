#include <iostream>
using namespace std;

int esc[100005];

int main() {
	int n, mv=0, t=0;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> esc[i];
		t += esc[i];
	}

	int a1 = (2 * t / n - n + 1)/2,
			an = a1 + n - 1;

	if(((a1+an) * n / 2) != t) {
		cout << -1 << endl;
		return 0;
	}

	for(int i=0; i<n; i++) {
		mv += a1 > esc[i] ? a1 - esc[i] : esc[i] - a1;
		a1++;
	}
	mv/=2;
	cout << mv << endl;
}
