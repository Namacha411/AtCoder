#include <bits/stdc++.h>
#include <cstdio>
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

class Point
{
	public:
	int x;
	int l;
};

bool cmp(Point &a, Point &b)
{
	return a.x < b.x;
}

int main()
{
	int n;
	cin >> n;
	vector<Point> p(n);
	rep(i,n)
	{
		cin >> p[i].x >> p[i].l;
	}

	sort(all(p),cmp);
	int ans = 0;
	rep(i,n-1)
	{
		int diff = (p[i].x + p[i].l) - (p[i+1].x - p[i+1].l);
		if(diff >= 0)
		{
			p[i+1].l = 0;
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}