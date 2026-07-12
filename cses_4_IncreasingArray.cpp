#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  int n;
  ll m = 0;
  ll maximum;
  cin >> n;
  cin >> maximum;
  for (int i = 1; i < n; i++) {
    ll value;
    cin >> value;
    if (value < maximum) {
      m += (maximum - value);
    } else {
      maximum = value;
    }
  }
  cout << m << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}