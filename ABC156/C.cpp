#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;

#define INF (int)(1e9)

#define rep(i,n) for(int i=0; i<(n); ++i)
#define REP(i,start,end) for(int i=(start);i<=(end);++i)
#define all(n) begin(n),end(n)

#define DEBUG

int main()
{
	//ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	vi x(n);
	rep(i,n) cin >> x[i];

	ll pos = 0;
	rep(i,n) pos += x[i];

	ll ans1 = 0;
	ll ans2 = 0;
	rep(i,n)
	{
		ans1 += (x[i] - (pos + n - 1) / n) * (x[i] - (pos + n - 1) / n);
	}
	rep(i,n)
	{
		ans2 += (x[i] - (pos / n)) * (x[i] - (pos / n));
	}

	ll ans = min(ans1, ans2);
	cout << ans << endl;
	return 0;
}