#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  ll a, b;
  cin >> a >> b;
  if ((a + b) % 3 == 0 && a <= 2 * b && b <= 2 * a) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
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