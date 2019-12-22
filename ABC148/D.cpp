#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;

#define INF (int)(1e9)

#define rep(i,n) for(int i=0; i<(n); i++)
#define REP(i,start,end) for(int i=(start);i<=(end);i++)
#define all(n) begin(n),end(n)

#define DEBUG

int main()
{
	int n;
	cin >> n;
	vi a(n);
	rep(i,n) cin >> a[i];

	int t = 1;
	//bool flag = false;
	int broke = 0;
	rep(i,n)
	{
		if(t == a[i])
		{
			++t;
			++broke;
			//flag = true;
		}
	}
	int ans = n - broke;
	if(broke != 0) cout << ans << endl;
	else cout << -1 << endl;
	return 0;
}