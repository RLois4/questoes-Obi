#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cin >> a;
	int aux;
	cin >> aux;
	if(aux >= a) b = aux;
	else {
		b = a;
		a = aux;
	}

	cin >> aux;
	if(aux >= b) c = aux;
	else {
		c = b;
		b = aux;
	}

	cout << b << endl;
	
}
