#include <iostream>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define lli long long int
using namespace std;
int main() {
	lli n,k,i,t=0;
	cin >> n >> k;
	for(i=1; i<=k;i++) {
		lli r = n-i;
		if(r<=k*2) {
			t+=min(k,r-1) - max(1,r-k) + 1;
		}
	}
	cout << t << endl;
}
