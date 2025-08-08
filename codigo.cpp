#include <iostream>
using namespace std;
int main() {
  int k = 0;
  int j = 0;
  int t = 0;
  int n; cin >> n; while(n--) {
    int a;
    cin >> a;
    if(a == 1) {
      k=0; j=1;
    }
    if(a == 0 && j == 1) {
      k++;
    }
    if(k == 2) {
      t++;
      k = 0;
      j = 0;
    }
  }
  cout << t << endl;
}
