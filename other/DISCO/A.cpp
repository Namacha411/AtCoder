#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()
#define DEBUG

int money(int input)
{
	if(input == 1)
	{
		return 300000;
	}
	else if(input == 2)
	{
		return 200000;
	}
	else if(input == 3)
	{
		return 100000;
	}

	return 0;
}

int main()
{
	int x, y;
	cin >> x >> y;

	ll ans = money(x) + money(y);
	if(x == 1 && y == 1) ans += 400000;
	cout << ans << endl;
	return 0;
}