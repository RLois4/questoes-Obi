#include <iostream>
using namespace std;
int main() {
  bool u=0,v=0;
  int n, a=0, b=0;
  cin >> n;
  while(n--) {
    int k; cin >> k;
    if(k==1) a++;
    else b++;
  }
  if(a%2 == 0) u = 0; else u = 1;
  if(b%2 == 0) v 
    = 0; else { v = 1; u = !u; }
  if(u) cout << 1; else cout << 0;
  cout << endl;
  if(v) cout << 1; else cout << 0;
  cout << endl;
}
