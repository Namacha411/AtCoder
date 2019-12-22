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
	vi a(3);
	rep(i,3) cin >> a[i];
	sort(all(a));
	reverse(all(a));
	int ans = a[0]*10 + a[1] + a[2];
	cout << ans << endl;
	return 0;
}