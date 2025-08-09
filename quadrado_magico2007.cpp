#include <iostream>
using namespace std;

const int nmax = 15;
int q[nmax][nmax];

int main () {
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cin >> q[i][j];
    }
  }
  int soma = 0;
  for(int j=0; j<n; j++) soma += q[0][j];
  for(int i=1; i<n; i++) {
    int s=0;
    for(int j=0; j<n; j++) {
      s += q[i][j];
    }
    if(s != soma) {
      soma = -1;
    }
  }

  for(int j = 0; j<n; j++) {
    int s = 0;
    for(int i = 0; i<n; i++) {
      s += q[i][j];
    }
    if(s != soma) {
      soma = -1;
    }
  }

  int s1 = 0, s2 = 0;
  for(int i=0; i<n; i++) {
    s1 += q[i][i];
    s2 += q[n-i-1][i];
  }
  if(s1 != soma || s2 != soma) {
    soma = -1;
  }

  cout << soma << endl;
}
