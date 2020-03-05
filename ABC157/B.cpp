#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
const int NIL = -1;

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) begin(n),end(n)

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

int main()
{
	int a[3][3];
	rep(i, 3) rep(j, 3) cin >> a[i][j];
	int n;
	cin >> n;
	int b[n];
	rep(i, n) cin >> b[i];

	bool check[3][3];
	rep(i, 3) rep(j, 3) check[i][j] = false;

	rep(i, 3) rep(j, 3)
	{
		rep(k, n)
		{
			if(a[i][j] == b[k])
				check[i][j] = true;
		}
	}

	bool ans = false;
	rep(i, 3)
	{
		if(check[i][0] & check[i][1] & check[i][2])
			ans = true;
	}

	rep(i, 3)
	{
		if(check[0][i] & check[1][i] & check[2][i])
			ans = true;
	}

	if(check[0][0] & check[1][1] & check[2][2])
		ans = true;

	if(check[0][2] & check[1][1] & check[2][0])
		ans = true;

	cout << (ans ? "Yes" : "No") << endl;
	return 0;
}