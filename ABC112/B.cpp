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
	int n, t;
	cin >> n >> t;
	vector<P> keiro(n);
	rep(i, n)
		cin >> keiro[i].first >> keiro[i].second;

	int min = INF;
	int ans = NIL;
	rep(i, n)
	{
		if(keiro[i].second <= t)
		{
			if(chmin(min, keiro[i].first))
				ans = keiro[i].first;
		}
	}

	cout << (ans != NIL ? to_string(ans) : "TLE") << endl;
	return 0;
}