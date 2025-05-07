#include <iostream>
using namespace std;

unsigned vetn[200005];

int main() {
    unsigned int n, m;
    cin >> n >> m;
    for(int i=1; i<=m; i++) {
        int op, l, v;
        cin >> op;
        if(op == 3) cin >> l;
        else cin >> l >> v;
        if(op == 2) {
            for(int k=v; k>=1; k--) {
                if(l>n || l<1)
                    break;
                vetn[l--] += k;
            }
        }

        if(op == 1) {
            for(int k=v; k>=1; k--) {
                if(l>n || l<1)
                    break;
                vetn[l++] += k;
            }
        }

        if(op == 3) {
            cout << vetn[l] << endl;
        }

    }
}