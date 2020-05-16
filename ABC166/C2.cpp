#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using P = pair<int, int>;

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
const int NIL = -1;
const ld PI = acosl(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, m;
	cin >> n >> m;
	vi h(n+1);
	for(int i = 1; i <= n; i++) cin >> h[i];
	vi ma(n+1, 0);
	rep(i, m){
		int a, b;
		cin >> a >> b;
		ma[a] = max(ma[a], h[b]);
		ma[b] = max(ma[b], h[a]);
	}
	int ans = 0;
	for(int i = 1; i < n+1; i++){
		if(h[i] > ma[i]) ans++;
	}

	cout << ans << endl;
	return 0;
}