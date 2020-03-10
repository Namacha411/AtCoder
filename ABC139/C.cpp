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

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n; cin >> n;
	vi h(n);
	rep(i, n) cin >> h[i];

	int ans = 0;
	int step = 0;
	rep(i, n-1)
	{
		//cerr << step << endl;
		if(h[i+1] <= h[i])
			step++;
		else
		{
			chmax(ans, step);
			step = 0;
		}
	}
	chmax(ans, step);

	cout << ans << endl;
	return 0;
}