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
	char c[3][3];
	rep(i,3)rep(j,3) cin >> c[i][j];

	rep(i,3)rep(j,3)
	{
		if(i == j) cout << c[i][j];
	}
	cout << endl;
	return 0;
}