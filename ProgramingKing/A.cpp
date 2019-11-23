#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()
#define DEBUG

int main()
{
	ll n;
	cin >> n;

	int ans;
	if(n % 2 == 0)
	{
		ans = (n / 2) - 1;
	}
	else
	{
		ans = (n - 1) / 2;
	}

	cout << ans << endl;
	return 0;
}