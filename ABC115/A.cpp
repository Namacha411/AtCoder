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
	int d;
	cin >> d;

	if(d == 25) cout << "Christmas" << endl;
	if(d == 24) cout << "Christmas Eve" << endl;
	if(d == 23) cout << "Christmas Eve Eve" << endl;
	if(d == 22) cout << "Christmas Eve Eve Eve" << endl;
	return 0;
}