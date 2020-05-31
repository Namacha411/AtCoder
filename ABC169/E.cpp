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
	vector<ll> a(n), b(n);
	rep(i, n) cin >> a[i] >> b[i];

	ll ans = 0;
	sort(all(a)); sort(all(b));
	if(n % 2 == 1) ans = b[n/2] - a[n/2];
	else ans = (b[n/2]+b[n/2+1])/2 - (a[n/2]+a[n/2+1])/2;

	cout << ans << endl;
	return 0;
}