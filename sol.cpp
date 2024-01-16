#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	string s, f;
	cin >> n >> s >> f;
	int extra = 0, need = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] != f[i]) {
			if (f[i] == '1')
				need++;
			if (s[i] == '1')
				extra++;
		}
	}
	cout << max(need, extra) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while (t--)
		solve();
}
