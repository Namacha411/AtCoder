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
template<class T>T choose2(const T &n){ return (n * (n - 1)) / 2; }

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n;
	cin >> n;
	vi a(n);
	rep(i, n) cin >> a[i];

	rep(i, n) a[i]--;
	vi cnt(n, 0);
	rep(i, n) cnt[a[i]]++;
	ll total = 0;
	rep(i, n)
		total += choose2((ll)cnt[i]);
	rep(i, n)
	{
		ll ans = total;
		ans -= choose2((ll)cnt[a[i]]);
		ans += choose2((ll)cnt[a[i]] - 1);
		cout << ans << endl;
	}
	return 0;
}