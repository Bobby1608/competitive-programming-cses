#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  ll counter = 0;

  for (ll i = 5; n / i > 0; i *= 5) {
    counter += n / i;
  }
  cout << counter << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}