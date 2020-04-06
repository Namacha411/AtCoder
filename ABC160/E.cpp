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

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int x, y, a, b, c;
	cin >> x >> y >> a >> b >> c;
	vi p(a), q(b), r(c);
	rep(i, a) cin >> p[i];
	rep(i, b) cin >> q[i];
	rep(i, c) cin >> r[i];

	sort(all(p)); reverse(all(p));
	sort(all(q)); reverse(all(q));
	vi tbl;
	rep(i, x) tbl.push_back(p[i]);
	rep(i, y) tbl.push_back(q[i]);
	rep(i, c) tbl.push_back(r[i]);
	sort(all(tbl));
	reverse(all(tbl));
	ll ans = 0;
	rep(i, x + y){
		ans += tbl[i];
	}

	cout << ans << endl;
	return 0;
}