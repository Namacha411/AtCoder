#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vi2 = vector<vector<int>>;
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

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, d;
	cin >> n >> d;
	vi2 x(n, vector<int>(d));
	rep(i, n) rep(j, d) cin >> x[i][j];

	vi l;
	rep(i, n)
	{
		for(int j = i+1; j < n; j++)
		{
			int dis = 0;
			rep(k, d)
				dis += pow((x[i][k] - x[j][k]), 2);
			l.push_back(dis);
		}
	}
	int ans = 0;
	for(auto a : l)
	{
		rep(i, 4000)
			if(i * i == a) ans++;
	}

	cout << ans << endl;
	return 0;
}