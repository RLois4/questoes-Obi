#include <iostream>
using namespace std;

int grade[1005][1005];
int pfxSum[1005][1005];

int main() {
	int l,c,m,n;
	cin >> l >> c >> m >> n;
	for(int i=0; i<l; i++) {
		for(int j=0; j<c; j++) {
			cin >> grade[i][j];
		}
	}

	for(int i=0; i<l; i++) {
		pfxSum[i][0] = 0;
		for(int j=0; j<n; j++) pfxSum[i][0] += grade[i][j];
		for(int j=1; j<c-n+1; j++) pfxSum[i][j] = pfxSum[i][j-1] + grade[i][j+n-1] - grade[i][j-1];
	}
	for(int i=0; i<c-n+1; i++) {
		grade[0][i] = 0;
		for(int j=0; j<m; j++) grade[0][i] += pfxSum[j][i];
		for(int j=1; j<l-m+1; j++) grade[j][i] = grade[j-1][i] + pfxSum[j+m-1][i] - pfxSum[j-1][i];
	}

	int max=-99999;
	for(int i=0; i<l-m+1; i++) {
		for(int j=0; j<c-n+1; j++) {
			if(max < grade[i][j]) max = grade[i][j];
		}
	}

	cout << max << endl;
}
