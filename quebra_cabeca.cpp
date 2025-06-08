#include <iostream>
#include <map>
#include <utility>

using namespace std;
map<int, char> mpini;
map<char, int> mpchar;
int main() {
    int n, i, v=0, v1, v2;
    char ch;
    cin >> n;

    for(i=0; i<n; i++) {
        cin >> v1 >> ch >> v2;
        mpini[v1] = ch;
        mpchar[ch] = v2;
    }

    while(v != 1) {
        ch = mpini[v];
        v = mpchar[ch];
        cout << ch;
    }

    cout << endl;
}
