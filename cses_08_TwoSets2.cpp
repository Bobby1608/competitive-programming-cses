#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  ll sum = 0;
  sum = n * (n + 1) / 2;
  ;

  if (sum % 2 != 0) {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";

  vector<ll> a, b;

  ll reminder = n % 4;

  if (reminder == 0) {
    for (ll i = 1; i <= n; i = i + 4) {
      a.push_back(i);
      a.push_back(i + 3);
      b.push_back(i + 1);
      b.push_back(i + 2);
    }
  } else if (reminder == 3) {
    a.push_back(1);
    a.push_back(2);
    b.push_back(3);

    for (ll i = 4; i <= n; i = i + 4) {
      a.push_back(i);
      a.push_back(i + 3);
      b.push_back(i + 1);
      b.push_back(i + 2);
    }
  }

  cout << "" << a.size() << "\n";
  for (ll i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << "\n";
  cout << "" << b.size() << "\n";
  for (ll i = 0; i < b.size(); i++) {
    cout << b[i] << " ";
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}