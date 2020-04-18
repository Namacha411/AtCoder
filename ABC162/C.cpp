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
	int k;
	cin >> k;

	ll ans = 0;
	for(int i = 1; i <= k; i++)
		for(int j = 1; j <= k; j++)
			for(int kk = 1; kk <= k; kk++)
				ans += gcd(i, gcd(j, kk));

	cout << ans << endl;
	return 0;
}