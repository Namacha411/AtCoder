#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;
typedef long double ld;
#define rep(i,n) for(ll i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()
#define DEBUG

int main()
{
	ll n;
	cin >> n;
	vector<ll> a(n);
	int ave = 0;
	rep(i,n)
	{
		cin >> a[i];
		ave += a[i];
	}
	ave /= n;
	sort(all(a));
	lower_bound(a.begin(), a.end(), ave);

	return 0;
}