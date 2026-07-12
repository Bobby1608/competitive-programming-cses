#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<int> a, b;
  ll sum = (n * (n + 1)) / 2;

  if (sum % 2 == 0) {
    cout << "YES\n";
    ll half = sum / 2;

    for (size_t i = n; i > 0; i--) {
      if (half >= i) {
        a.push_back(i);
        half -= i;
      } else {
        b.push_back(i);
      }
    }

    cout << "" << a.size() << "\n";
    for (size_t i = 0; i < a.size(); i++) {
      cout << a[i] << " ";
    }
    cout << "\n";

    cout << "" << b.size() << "\n";
    for (size_t i = 0; i < b.size(); i++) {
      cout << b[i] << " ";
    }
    cout << "\n";

  } else {
    cout << "NO\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}