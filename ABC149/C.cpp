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
	int x;
	cin >> x;

	int ans = 0;
	bool flag = true;
	while (flag)
	{
		REP(i, 2, x+1)
		{
			if(i == x)
			{
				flag = false;
				ans = i;
			}
			if(x % i == 0)
			{
				++x;
				break;
			}
		}
	}

	cout << ans << endl;
	return 0;
}