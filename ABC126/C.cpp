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
const ld PI = acos(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	cout << fixed << setprecision(9);
	ld n, k;
	cin >> n >> k;

	ld ans = 0;
	for(int i = 1; i <= n; i++)
	{
		ld tmp = 1 / n;
		int now = i;
		while(now < k){ now *= 2; tmp /= 2; }
		ans += tmp;
	}

	cout << ans << endl;
	return 0;
}