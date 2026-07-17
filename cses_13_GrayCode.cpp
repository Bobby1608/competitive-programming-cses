#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  int n, gray = 0;
  cin >> n;

  int total = 1 << n;

  for (int i = 0; i < total; i++) {
    gray = i ^ (i >> 1);

    for (int bits = n - 1; bits >= 0; bits--) {
      if ((gray >> bits) & 1)
        cout << '1';
      else
        cout << '0';
    }

    cout << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}