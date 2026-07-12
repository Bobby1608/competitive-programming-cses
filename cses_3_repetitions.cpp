#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  string s;

  cin >> s;
  if (s.length() <= 1) {
    cout << s.length() << "\n";
    return;
  }

  ll currentstreak = 1, maxstreak = 1;

  for (size_t i = 1; i < s.length(); i++) {
    if (s[i] == s[i - 1]) {
      currentstreak++;
    } else {
      currentstreak = 1;
    }
    maxstreak = max(maxstreak, currentstreak);
  }
  cout << maxstreak << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}