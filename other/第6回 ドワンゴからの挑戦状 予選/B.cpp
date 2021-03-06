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

#define MOD (int)1e9 + 7
#define INF (int)(1e9)

#define rep(i,n) for(int i=0; i<(n); ++i)
#define REP(i,start,end) for(int i=(start);i<=(end);++i)
#define all(n) begin(n),end(n)


#define DEBUG

ll kaijou(int n)
{
	if(n > 1)
	{
		return (n * kaijou(n-1)) % MOD;
	}
	return 1;
}

int main()
{
	int n;
	cin >> n;
	vll x(n);
	rep(i,n) cin >> x[i];

	int k = n;
	rep(i,n)
	{
		--k;
	}

	return 0;
}