#include<bits/stdc++.h>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()

#define DEBUG

int main()
{
	int r, d;
	ll x;
	cin >> r >> d >> x;
	rep(i, 10)
	{
		x = r*x - d;
		cout << x << endl;
	}
	return 0;
}