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
	int n, t;
	cin >> n >> t;
	vi a(n);
	rep(i, n) cin >> a[i];

	ll ans = 0;
	rep(i, n-1){
		ans += min(a[i+1]-a[i], t);
	}
	ans += t;

	cout << ans << endl;
	return 0;
}