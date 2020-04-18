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
	int n; cin >> n;
	vi t(n);
	rep(i, n) cin >> t[i];
	int m; cin >> m;
	vi p(m), x(m);
	rep(i, m) cin >> p[i] >> x[i];

	vi tmp;
	rep(i, m){
		int ans = 0;
		tmp = t;
		tmp[p[i]-1] = x[i];
		rep(j, n){
			ans += tmp[j];
		}
		cout << ans << endl;
	}
	return 0;
}