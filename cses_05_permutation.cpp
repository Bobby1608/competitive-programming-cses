#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;

  if (n == 2 || n == 3) {
    cout << "NO SOLUTION";
    return;
  }

  for (int i = 2; i <= n; i = i + 2) {
    cout << i << " ";
  }

  for (int i = 1; i <= n; i = i + 2) {
    cout << i << " ";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}