#include <bits/stdc++.h>
using namespace std;
#define nmax 1005
#define inf 0x72727272

int x1[nmax];
int x2[nmax];
int y_1[nmax];
int y_2[nmax];

int dist[nmax];
int vis[nmax];
vector<pair<int,int>> gr[nmax];

int main() {
    int xi, yi, xf, yf;
    cin >> xi >> yi >> xf >> yf;
    int n;
    cin >> n;
    
    x1[n] = xi; x2[n] = xi; y_1[n] = yi; y_2[n] = yi;
    x1[n+1] = xf; x2[n+1] = xf; y_1[n+1] = yf; y_2[n+1] = yf;


    for(int i=0; i<n; i++) {
        cin >> x1[i] >> y_1[i] >> x2[i] >> y_2[i];
        if(x1[i] > x2[i]) swap(x1[i], x2[i]);
        if(y_1[i] > y_2[i]) swap(y_1[i], y_2[i]);
    }

    n += 2;

    for(int i=0; i<n; i++) for(int j=i+1; j<n; j++) {
        int w = max(0, max(x1[i], x1[j]) - min(x2[i], x2[j])) + max(0, max(y_1[i], y_1[j]) - min(y_2[i], y_2[j]));
        gr[i].push_back({j, w});
        gr[j].push_back({i, w});
    }    

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    fill(dist, dist + nmax, inf);

    dist[n-2] = 0;
    pq.push({dist[n-2], n-2});
    while(!pq.empty()) {
        auto [w, v] = pq.top();
        pq.pop();
        if(vis[v]) continue;
        vis[v] = 1;
        for(auto [u, p] : gr[v]) {
            if(dist[u] > dist[v] + p) {
                dist[u] = dist[v] + p;
                pq.push({dist[u], u});
            }
        }
    }

    cout << dist[n-1] << endl;

}