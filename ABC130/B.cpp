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
	//cout << fixed << setprecision(6);
	int n, x;
	cin >> n >> x;
	vi l(n);
	rep(i, n) cin >> l[i];

	int ans = 1;
	vi d(n+1, 0);
	for(int i = 1; i <= n; i++)
	{
		d[i] = d[i-1] + l[i-1];
		if(d[i] <= x) ans++;
	}

	rep(i, d.size()) cerr << d[i] << ' ';
	cerr << endl;

	cout << ans << endl;
	return 0;
}