#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  long long n, sum = 0;
  cin >> n;
  for (int i = 0; i < n - 1; i++) {
    long long v;
    cin >> v;
    sum = sum + v;
  }
  cout << (((n * (n + 1)) / 2) - sum) << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}