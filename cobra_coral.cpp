#include <iostream>
using namespace std;
int v[4];
int main() {
	int i=4;
	while(i--) {
		cin >> v[i];
	}
	if(v[0] == v[2] || v[1]==v[3]) cout << "V\n";
	else cout << "F\n";
}
