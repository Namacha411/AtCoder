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
	int n, a, b;
	cin >> n >> a >> b;
	vector<pair<string, int>> v(n);
	rep(i, n)
		cin >> v[i].first >> v[i].second;

	int ans = 0;
	rep(i, n){
		if(v[i].first == "East"){
			cerr << max(a, min(v[i].second, b)) << endl;
			ans += max(a, min(v[i].second, b));
		}
		else{
			cerr << max(a, min(v[i].second, b)) << endl;
			ans -= max(a, min(v[i].second, b));
		}
	}

	if(ans == 0)
		cout << ans << endl;
	else if(ans < 0)
		printf("%s %d\n", "West", -ans);
	else
		printf("%s %d\n", "East", ans);
	return 0;
}