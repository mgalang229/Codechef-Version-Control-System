#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	int f[100], n, m, k;
	memset(f, 0, sizeof(f));
	cin >> n >> m >> k;
	int tmp = 0;
	for(int i = 0; i < m; ++i) {
		cin >> tmp;
		f[tmp-1] += 10;
	}
	tmp = 0;
	for(int i = 0; i < k; ++i) {
		cin >> tmp;
		f[tmp-1] += 1;
	}
	int ans = 0, ans2 = 0;
	for(int i = 0; i < n; ++i) {
		if(f[i] == 11) ans++;
		else if(f[i] == 0) ans2++;
	}
	cout << ans << " " << ans2 << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
