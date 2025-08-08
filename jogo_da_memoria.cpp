#include <bits/stdc++.h>
using namespace std;

#define inf -1
#define logMax 20

vector<int> v[50005];
vector<int> pos[25555];
int anc[50005][logMax];
int dist[50005];
int num[50005];

int lca(int v1, int v2) {
  if(dist[v1] < dist[v2]) swap(v1, v2);
  int diff = dist[v1] - dist[v2];
  for(int i=0; i<logMax; i++) {
    if(diff & (1<<i)) { // ve se o algarismo i do binario de diff existe
      v1 = anc[v1][i];
    }
  }

  if(v1 == v2) return v1;
  
  for(int i=logMax-1; i>=0; i--) {
    if(anc[v1][i] != -1 && anc[v1][i] != anc[v2][i]) {
      v1 = anc[v1][i];
      v2 = anc[v2][i];
    }
  }

  return anc[v1][0];
}

int main() {
  int n;
  cin >> n;

  for(int i=1; i<=n; i++) {
    dist[i] = inf;
    int a;
    cin >> a;
    pos[a].push_back(i);
  }
  

  for(int i=0; i<n-1; i++) {
    int a,b;
    cin >> a >> b;
    v[b].push_back(a);
    v[a].push_back(b);
  }

  queue<int> q;
  dist[1] = 0;
  anc[1][0] = -1;
  q.push(1);

  while(!q.empty()) {
    int u = q.front(); q.pop();
    for(auto x : v[u]) {
      if(dist[x] == inf) {
        anc[x][0] = u;
        dist[x] = dist[u] + 1;
        q.push(x);
      }
    }
  }

  for(int i=1; i<20; i++) {
    for(int j=1; j<=n; j++) {
      if(anc[j][i-1] != -1 && anc[anc[j][i-1]][i-1] != -1) { // se nao for a raiz
        anc[j][i] = anc[anc[j][i-1]][i-1];
      } else {
        anc[j][i] = -1; // mantem sem antecessor, se for raiz
      }
    }
  }

  int total = 0;
  for(int i=1; i<=n/2; i++) {
    int a = pos[i][0], b = pos[i][1];
    int lc = lca(a, b);
    int da = dist[a] - dist[lc];
    int db = dist[b] - dist[lc];
    total += da + db;
  }
  
  cout << total << endl;

  
}
