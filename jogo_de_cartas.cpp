#include <iostream>
using namespace std;

int pos[100005];

int main() {
	int n, cicles = 0, card;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> card;
		pos[card] = i+1;
	}
	for(int i=1; i<n+1; i++) if(pos[i] > pos[i+1]) cicles++;
	cout << cicles << endl;
}
