#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;

#define y0 y3487465
#define y1 y8687969
#define j0 j1347829
#define j1 j234892
#define next asdnext
#define prev asdprev

#define INF (int)(1e9)

#define rep(i,n) for(int i=0; i<(n); ++i)
#define REP(i,start,end) for(int i=(start);i<=(end);++i)
#define all(n) begin(n),end(n)

#define DEBUG

int main()
{
	int n;
	cin >> n;

	vi t(n);
	vector<string> s(n);
	rep(i,n) cin >> s[i] >> t[i];

	string x;
	cin >> x;

	int index;
	int ans = 0;
	rep(i,n)
	{
		if(x == s[i]) index = i;
	}
	for(int i = index+1; i < n; ++i)
	{
		ans += t[i];
	}

	cout << ans << endl;
	return 0;
}