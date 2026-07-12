#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;
  long long total = 0;
  for (long long i = 1; i <= n; i++) {
    long long attack;

    if (i < 3)
      attack = 0;
    else
      attack = (i - 1) * (i - 2) * 4;

    total = ((i * i * (i * i - 1)) / 2) - attack;
    cout << total << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}