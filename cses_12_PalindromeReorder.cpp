#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
  string a;
  cin >> a;

  int n = a.size(), index = -1, odd = 0;
  vector<int> frequency(26, 0);

  for (int i = 0; i < n; i++) {
    frequency[a[i] - 'A']++;
  }

  for (int i = 0; i < 26; i++) {
    if (frequency[i] % 2 != 0) {
      odd++;
      index = i;
    }
  }

  if (odd > 1) {
    cout << "NO SOLUTION";
    return;
  }

  string left = "";
  string centre = "";

  for (int i = 0; i < 26; i++) {
    left += string(frequency[i] / 2, 'A' + i);
  }

  if (index != -1) {
    centre = 'A' + index;
  }

  string right = left;
  reverse(right.begin(), right.end());

  cout << left << centre << right << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}