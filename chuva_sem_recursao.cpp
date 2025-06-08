#include <iostream>
#include <queue>
#include <utility>
using namespace std;

char mapa[505][505];

int main() {
	int n, m;
	queue<pair<int,int>> q;
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> mapa[i][j];
			if(mapa[i][j] == 'o') {
				q.push(make_pair(i,j));
				mapa[i][j] = '.';
			}
		}
	}

	while(!q.empty()) {
		auto [y,x] = q.front();
		q.pop();
		if(mapa[y][x] != 'o') {
			if(y<n-1 && mapa[y+1][x] == '.') q.push(make_pair(y+1,x));
			if(x>0 && mapa[y][x-1] == '.' && mapa[y+1][x] == '#') q.push(make_pair(y,x-1));
			if(x<n-1 && mapa[y][x+1] == '.' && mapa[y+1][x] == '#') q.push(make_pair(y,x+1));
			mapa[y][x] = 'o';
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cout << mapa[i][j];
		}
		cout << '\n';
	}
}
