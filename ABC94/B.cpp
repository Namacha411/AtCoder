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

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, m, x;
	cin >> n >> m >> x;
	vi a(m);
	rep(i, m) cin >> a[i];

	vi map(n+1, 0);
	rep(i, m) map[a[i]] = 1;
	int start = min(n, x);
	int goal = max(n, x);
	int ans1 = 0;
	for(int i = start; i <= goal; i++)
	{
		cerr << i << endl;
		ans1 += map[i];
	}
	int ans2 = 0;
	for(int i = 0; i <= x; i++)
	{
		ans2 += map[i];
	}

	cout << min(ans1, ans2) << endl;
	return 0;
}