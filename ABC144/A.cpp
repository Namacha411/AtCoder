#include<bits/stdc++.h>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()

#define DEBUG

int main()
{
	int a, b;
	cin >> a >> b;

	int ans;
	if(a > 9 || b > 9)
	{
		ans = -1;
	}
	else
	{
		ans = a * b;
	}

	cout << ans << endl;
	return 0;
}
