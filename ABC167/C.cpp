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
	int n, m, x;
	cin >> n >> m >> x;
	vi c(n);
	vector<vi> a(n, vector<int>(m));
	rep(i, n){
		cin >> c[i];
		rep(j, m) cin >> a[i][j];
	}

	ll ans = INFLL;
	for(int bit = 0; bit < (1 << n); bit++){
		vi b;
		ll mny = 0;
		for(int i = 0; i < n; i++){
			if(bit & (1 << i)){
				b.push_back(i);
				mny += c[i];
			}
		}
		vi tmp(m, 0);
		for(auto t : b){
			rep(i, m){
				tmp[i] += a[t][i];
			}
		}
		bool ok = true;
		rep(i, m){
			if(tmp[i] < x) ok = false;
		}
		if(ok) ans = min(ans, mny);
	}

	if(ans == INFLL) ans = -1;
	cout << ans << endl;
	return 0;
}