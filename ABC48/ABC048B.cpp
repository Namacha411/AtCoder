#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

typedef unsigned long long int ll;
typedef long double ld;

#define Sq(x) (x) * (x)
#define Rep(i,n) for(int i = 0; i < n; i++)
#define All(x) x.begin(),x,end()
#define Sort(x) sort(All(x));
#define Reverse(x) reverse(All(x));
#define vec vector
#define OUT(x) cout<<x<<endl

#define __INT_MAX__ 2147483647

#define DEBUG

int main()
{
	ll a, b, x;
	ll ans = 0;
	cin >> a >> b >> x;

	for(ll i = a; i <= b; i++)
	{
		if(i % x == 0) ans++;
	}

	cout << ans << endl;
	return 0;
}
