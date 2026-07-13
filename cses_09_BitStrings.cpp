#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  ll n, sum = 1;
  cin >> n;

  for (ll i = 1; i <= n; i++) {
    sum = ((sum % 1000000007) * (2 % 1000000007)) % 1000000007;
  }
  cout << sum % 1000000007 << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}