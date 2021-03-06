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

#define DEBUG

ll p(ll n)
{
	if(n == 1) return 0;
	return (n - 1) + p(n - 1);
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n; cin >> n;
	vector<string> s(n);
	rep(i, n) cin >> s[i];

	unordered_map<string, ll> um;
	rep(i, n)
	{
		sort(all(s[i]));
		um[s[i]]++;
	}
	ll ans = 0;
	for(auto a : um)
	{
		if(a.second == 1) continue;
		ans += p(a.second);
	}

	cout << ans << endl;
	return 0;
}