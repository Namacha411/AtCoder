#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using vld = vector<ld>;
using P = pair<int, int>;

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
const int NIL = -1;
const ld PI = acosl(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

struct pos{
	ld x, y;
};

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	pos b, a;
	cin >> b.x >> b.y >> a.x >> a.y;
	ld t, v;
	cin >> t >> v;
	ld n;
	cin >> n;
	vld x(n), y(n);
	rep(i, n) cin >> x[i] >> y[i];

	bool ans = false;
	rep(i, n){
		ld dis = 0;
		dis += sqrt(pow(b.x - x[i], 2) + pow(b.y - y[i], 2));
		dis += sqrt(pow(a.x - x[i], 2) + pow(a.y - y[i], 2));
		if(t * v >= dis) ans = true;
	}

	cout << (ans ? "YES" : "NO") << endl;
	return 0;
}