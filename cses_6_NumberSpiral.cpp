#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  long long i, j;
  cin >> i >> j;
  long long num = max(i, j), z;

  if (num % 2 == 0) {
    if (i >= j) {
      z = num * num - j + 1;
    } else {
      z = (num - 1) * (num - 1) + i;
    }
  } else {
    if (i >= j) {
      z = (num - 1) * (num - 1) + j;
    } else {
      z = num * num - i + 1;
    }
  }
  cout << z << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}