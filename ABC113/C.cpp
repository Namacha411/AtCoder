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
	const int MAX = 1e6;
	int n, m;
	cin >> n >> m;
	vi p(MAX), y(MAX);
	vector<vi> yd(MAX, vector<int>(0,0));
	rep(i, m)
	{
		cin >> p[i] >> y[i];
		yd[p[i]].push_back(y[i]);
	}
	rep(i, n) sort(all(yd[i]));
	rep(i, m)
		printf(
			"%06d%06d\n",
			p[i],
			(int)(lower_bound(all(yd[p[i]]), y[i]) - yd[p[i]].begin() + 1)
		);
	return 0;
}