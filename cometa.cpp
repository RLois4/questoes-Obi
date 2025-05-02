#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  a += 76 - (a - 10) % 76;
  cout << a << '\n';
}
