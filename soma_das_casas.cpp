#include <iostream>
using namespace std;

int casas[100005];

int main() {
  int n, k;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> casas[i];
  }
  cin >> k;

  int beg = 0;
  int end = n - 1;
  while (1) {
    if (casas[beg] + casas[end] == k) {
      cout << casas[beg] << ' ' << casas[end] << '\n';
      break;
    } else if (casas[beg] + casas[end] > k) {
      end--;
    } else if (casas[beg] + casas[end] < k) {
      beg++;
    }
  }
}
