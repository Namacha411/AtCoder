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
	ios::sync_with_stdio(false); cin.tie(0);
	int a,b,c,d;
	cin >> a >> b >> c >> d;

	int left = a + b;
	int right = c + d;

	if(left > right) cout << "Left\n";
	else if(left == right) cout << "Balanced\n";
	else cout << "Right\n";
	return 0;
}