#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using P = pair<int, int>;

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 2019;
const int NIL = -1;
const ld PI = acos(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

vi tbl;
void solve(int &l, int &r)
{
	for(int i = l; i <= r; i++)
	{
		for(int j = i + 1; j <= r; j++)
		{
			tbl.push_back(i * j % MOD);
		}
	}
	return;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int l, r;
	cin >> l >> r;

	solve(l, r);
	int ans = INF;
	rep(i, tbl.size()) chmin(ans, tbl[i]);

	cout << ans << endl;
	return 0;
}