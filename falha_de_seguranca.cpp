#include <bits/stdc++.h>
using namespace std;

string vet[20005];

int main() {
	int n, t;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> vet[i];
	}

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			bool a = vet[i].find(vet[j]) != std::string::npos;
			if(a)
				t++;
		}
	}

	t -= n;
	cout << t << '\n';
}