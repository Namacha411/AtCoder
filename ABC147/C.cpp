#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define all(x) x.begin(),x.end()
#define DEBUG

int main()
{
	ll n;
	cin >> n;
	vector<ll> a(n);
	rep(i, n) cin >> a[i];

	ll ans = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			ans += a[i] ^ a[j];
			if(ans > (int)(1e9+7)) ans %= (int)1e9+7;
		}
	}
	cout << ans << endl;
	return 0;
}
