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
	string s,t;
	cin >> s >> t;

	vector<char> ans(n*2);
	rep(i,n)
	{
		ans[i*2] = static_cast<char>(s[i]);
		ans[i*2+1] = static_cast<char>(t[i]);
	}

	rep(i,2*n)cout << ans[i];
	cout << endl;
	return 0;
}