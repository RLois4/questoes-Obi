#include <bits/stdc++.h>
using namespace std; int main(){int a,b,c,d; cin >> a >> b >> c >> d; int k1 = a*b; int k2 = c*d; if(k1 == k2) cout << 0; if(k1 > k2) cout << -1; if(k1 < k2) cout << 1; cout << endl; return 0;}
