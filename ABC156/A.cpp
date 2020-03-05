#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;

#define INF (int)(1e9)

#define rep(i,n) for(auto i=0; i<(n); ++i)
#define REP(i,start,end) for(auto i=(start);i<=(end);++i)
#define all(n) begin(n),end(n)

#define DEBUG

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n,r;
	cin >> n >> r;
	int ans;
	if(n < 10)
	{
		ans = (100 * (10 - n)) + r;
	}
	else ans = r;

	cout << ans << endl;
	return 0;
}