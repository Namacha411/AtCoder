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
	ll a, b, n;
	cin >> a >> b >> n;

	vll tbl;
	rep(i, n+1){
		tbl.push_back(a*i/b - a*(i/b));
	}
	sort(all(tbl));

	cout << tbl[n] << endl;
	return 0;
}