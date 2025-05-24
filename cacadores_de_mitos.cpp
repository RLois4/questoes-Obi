#include <iostream>
using namespace std;

int mat[502][502];

int main() {
  int n, a = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (mat[x][y])
      a = 1;
    else
      mat[x][y] = 1;
  }
  cout << a << '\n';
}
