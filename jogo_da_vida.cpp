#include <cstdio>
using namespace std;

int m[55][55];
int m2[55][55];

int main() {
	int i, j, n, q, t;
	scanf("%d%d", &n, &q);
	for(i=1; i<=n; i++)
		for(j=1; j<=n; j++) {
			scanf("%1d", &m[i][j]);
			m2[i][j] = m[i][j];
		}

	while(q--) {
		for(i=1; i<=n; i++)
			for(j=1; j<=n; j++) {
				t=0;
				t += m[i+1][j] + m[i][j+1] + m[i-1][j] + m[i][j-1] + m[i+1][j-1] + m[i-1][j+1] + m[i+1][j+1] + m[i-1][j-1];
				if(m[i][j]) {
					if(t != 3 && t != 2) {
						m2[i][j] = 0;
					}
				} else {
					if(t == 3) {
						m2[i][j] = 1;
					}
				}
			}

		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				m[i][j] = m2[i][j];
	}
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++)
			printf("%d", m[i][j]);
		printf("\n");
	}
}
