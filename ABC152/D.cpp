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

inline int inv(int a) {
	return ((a % 10)*10) + ((a-(a%10))/10);
}

int main()
{
	int n;
	cin >> n;

	int ans = 0;
	REP(i,1,n+1)
	{
		if(i % 10 == 0) continue;
		if(i < 10)
		{
			if((i*10)+i < n) ans += 2;
			else ++ans;
		}
		else if(i > 10)
		{
			if(i % 10 == (i-(i%10))/10) ++ans;
			else if(inv(i) < n) ans += 2;
		}
	}

	cout << ans << endl;
	return 0;
}