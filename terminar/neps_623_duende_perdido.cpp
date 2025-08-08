#include <bits/stdc++.h>
using namespace std;

#define nmax 15
#define inf 0x4d4d4d4d
#define accessible(a) (a == 1 || a == 0)


int mat[nmax][nmax];
int dist[nmax][nmax];


int main() {
  int n, m, xini, yini;
  cin >> n >> m;
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=m; j++) {
      int c;
      cin >> c;
      mat[i][j] = c;
      if(c==3) {
        yini = i;
        xini = j;
      }
    }
  }

  for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) dist[i][j] = inf;

  queue<pair<int,int>> q;
  q.push({yini, xini});
  dist[yini][xini] = 0;

  while(!q.empty()) {
    auto [y, x] = q.front(); q.pop();

    if(mat[y][x] == 0) {
      cout << dist[y][x] << endl;
      return 0;
    }

    if(y > 1 && accessible(mat[y-1][x]) && dist[y][x] < dist[y-1][x]) {
      q.push({y-1, x});
      dist[y-1][x] = dist[y][x] + 1;
    }
    if(y < n && accessible(mat[y+1][x]) && dist[y][x] < dist[y+1][x]) {
      q.push({y+1, x});
      dist[y+1][x] = dist[y][x] + 1;  
    }
    if(x > 1 && accessible(mat[y][x-1]) && dist[y][x] < dist[y][x-1]) {
      q.push({y, x-1});
      dist[y][x-1] = dist[y][x] + 1; 
    }
    if(x < m && accessible(mat[y][x+1]) && dist[y][x] < dist[y][x+1]) {
      q.push({y, x+1});
      dist[y][x+1] = dist[y][x] + 1;
    }
  }

  
}
