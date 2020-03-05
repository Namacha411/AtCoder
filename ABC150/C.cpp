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

int kaijou(int n)
{
	if(n > 1)
	{
		return n * kaijou(n-1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n;
	cin >> n;
	vi p(n), q(n), per(n);
	rep(i,n) cin >> p[i];
	rep(i,n) cin >> q[i];
	rep(i,n) per[i] = i+1;

	int pn,qn;
	rep(j,kaijou(n))
	{
		rep(i,n)
		{
			if(p[i] != per[i])
			{
				next_permutation(all(per));
				break;
			}
			else if(i == n-1) pn = i;
		}
	}
	rep(i,n) per[i] = i+1;
	rep(j,kaijou(n))
	{
		rep(i,n)
		{
			if(q[i] != per[i])
			{
				next_permutation(all(per));
				break;
			}
			else if(i == n-1) qn = i;
		}
	}

	cout << pn << endl;
	cout << qn << endl;
	cout << abs(pn-qn) << endl;

	return 0;
}