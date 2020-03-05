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

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }

#define DEBUG

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n,k;
	cin >> n >> k;
	vector<int> p(n);
	rep(i, n) cin >> p[i];

	vector<int> sum(n, 0);
	rep(i, n)
	{
		if(i == 0) sum[i] = p[i];
		else sum[i] = sum[i-1] + p[i];
	}

	int max = 0;
	int ite;
	rep(i, n - k)
	{
		if(chmax(max, sum[i+k] - sum[i]))
			ite = i;
	}

	double ans = 0;
	int f = (ite == 0) ? 0 : 1;
	cout << f << endl;
	rep(i, k)
	{
		ans += (double)(p[i + ite + f] + 1) / 2;
	}

	cout << fixed << setprecision(6);
	cout << ans << endl;
	return 0;
}