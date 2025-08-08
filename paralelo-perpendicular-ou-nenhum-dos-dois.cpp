#include <bits/stdc++.h>
using namespace std;

int main() {
  long long ax, ay;
  long long bx, by;
  cin >> ax >> ay >> bx >> by;

  long long det = ax * by - bx * ay;
  long long dot = ax * bx + ay * by;
  if(det == 0) {
    cout << 1 << endl;
    return 0;
  }
  if(dot == 0) {
    cout << -1 << endl;
    return 0;
  }
  cout << 0 << endl;
}
