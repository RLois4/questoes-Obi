#include <bits/stdc++.h>

using namespace std;

int main()
{
	char ch;
	int pts=0;
	for(int i=0; i<6; i++){
		cin >> ch;
		if(ch == 'V') pts++;
	}
	if(pts > 4) cout << 1 << '\n';
	else if(pts > 2) cout << 2 << '\n';
	else if(pts > 0) cout << 3 << '\n';
	else cout << -1 << '\n';
}
