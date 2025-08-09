#include <bits/stdc++.h>
using namespace std;
vector<pair<int, string>> v;
vector<string> times[10005];

int main() {
  int n, t;
  cin >> n >> t;
  for(int i=0; i<n; i++) {
    string s;
    int hab;
    cin >> s >> hab;
    v.push_back({hab, s});
  }

  sort(v.begin(), v.end(), greater<pair<int, string>>());

  int atual=0;
  for(int i=0; i<n; i++) {
    auto [_, name] = v[i];
    atual = atual % t + 1;
    times[atual].push_back(name);
  }

  for(int i=1; i<=t; i++) {
    cout << "Time " << i << endl;
    sort(times[i].begin(), times[i].end());
    for(auto x : times[i]) {
      cout << x << endl;
    }
    cout << endl;
  }
}
