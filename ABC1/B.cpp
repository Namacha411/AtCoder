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
	int m; cin >> m;

	int ans = 0;
	if(m < 100) ans = 0;
	else if(m <= 5000) ans = m / 100;
	else if(m <= 30000) ans = m / 1000 + 50;
	else if(m <= 70000) ans = (m/1000-30) / 5 + 80;
	else ans = 89;

	printf("%02d\n", ans);
	return 0;
}