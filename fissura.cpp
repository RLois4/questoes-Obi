#include <iostream>
#include <queue>
#include <utility>

using namespace std;

char mapa[505][505];

int main() {
	int n; char f;
	cin >> n >> f;
	queue<pair<int,int>> q;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> mapa[i][j];
		}
	}

	q.push(make_pair(0,0));

	while(!q.empty()) {
		auto [y,x] = q.front();
		q.pop();
		if(mapa[y][x] != '*' && mapa[y][x] <= f) {
			mapa[y][x] = '*';
			if(y<n-1 && mapa[y+1][x] <= f){q.push(make_pair(y+1,x));}
			if(y>0 && mapa[y-1][x] <= f){q.push(make_pair(y-1,x));}
			if(x<n-1 && mapa[y][x+1] <= f){q.push(make_pair(y,x+1));}
			if(x>0 && mapa[y][x-1] <= f){q.push(make_pair(y,x-1));}
		}
	}

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout << mapa[i][j];
		}
		cout << '\n';
	}
}
