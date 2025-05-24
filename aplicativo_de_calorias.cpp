#include <iostream>
using namespace std;

int main() {
  int e1, e2, e3, x;
  cin >> e1 >> e2 >> e3 >> x;

  if (e2 - e1 <= x)
    cout << e2 << '\n';
  if (e2 - e1 > x)
    cout << e3 << '\n';
}
