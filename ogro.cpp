#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n == 0)
		cout << "*\n*\n";
	else if(n<=5) {
		for(int i=0; i<n; i++)
			cout << 'I';
		cout << "\n*\n";
	}
	else {
		cout << "IIIII\n";
		int aux = n-5;
		for(int i=0; i<n-5; i++)
			cout << "I";
		cout << "\n";
	}
}