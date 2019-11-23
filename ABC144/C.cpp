#include<bits/stdc++.h>
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

	ll min = (ll)1e18;
	for(ll i = 1; i <= sqrt(n); i++)
	{
		if((n % i) == 0 && ((n/i) + i - 2) < min)
		{
			//cout << i << "\t" << n/i << endl;
			min = (i + (n/i)) - 2;
		}
	}
	cout <<	min << endl;
	return 0;
}
