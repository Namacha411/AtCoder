#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;

const int MOD = (int)1e9 + 7;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define REP(i, start, end) for (int i = (start); i <= (end); ++i)
#define all(n) begin(n), end(n)

#define DEBUG

std::vector<std::vector<long long> > comb(int n, int r);

int main()
{
	int n, a, b;
	cin >> n >> a >> b;

	vector<vector<long long> > res = comb(n,n);

	ll ans = 0;
	rep(i,n)
	{
		if(i != a && i != b) ans += res[n][i];
		if(ans >= MOD) ans %= MOD;
	}

	cout << ans << endl;
	return 0;
}

std::vector<std::vector<long long> > comb(int n, int r)
{
	std::vector<std::vector<long long> > v(n + 1, std::vector<long long>(n + 1, 0));
	for (int i = 0; i < v.size(); i++)
	{
		v[i][0] = 1;
		v[i][i] = 1;
	}
	for (int j = 1; j < v.size(); j++)
	{
		for (int k = 1; k < j; k++)
		{
			v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
		}
	}
	return v;
}