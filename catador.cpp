#include <iostream>
using namespace std;

int con[100005], op[100005];

int main(int argc, char *argv[]) {
  int n, m, c;
  cin >> n >> m;
  int a = n;
  while (a--) {
    cin >> con[n - a];
  }
  a = m;
  while (a--) {
    cin >> op[m - a];
  }

  for (int i = 1; i <= m; i++) {
    c = con[op[i]];
    for (int j = (-c + op[i]) > 1 ? (-c + op[i]) : 1; j <= c + op[i]; j++) {
      if (j < 1 || j > n)
        continue;
      if (con[j] != 0)
        con[j] -= 1;
    }
  }

  c = 0;

  for (int i = 1; i <= n; i++) {
    c += con[i];
  }

  cout << c << '\n';

  return 0;
}
