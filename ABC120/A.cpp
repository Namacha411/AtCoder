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
	int a, b, c;
	cin >> a >> b >> c;
	a = (b - (b % a)) / a;
	int ans = (a < c) ? a : c;
	cout << ans << endl;
	return 0;
}