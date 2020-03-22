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
	int n, m;
	vector<string> s, t;
	cin >> n;
	s.resize(n);
	rep(i, n) cin >> s[i];
	cin >> m;
	t.resize(m);
	rep(i, m) cin >> t[i];

	map<string, int> sm, tm;
	rep(i, n) sm[s[i]]++;
	rep(i, n) tm[s[i]] = 0;
	rep(i, m) tm[t[i]]++;

	int ans = 0;
	rep(i, n)
	{
		chmax(ans, sm[s[i]] - tm[s[i]]);
	}
	cout << ans << endl;
	return 0;
}