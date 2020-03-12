#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()

#define DEBUG

int main()
{
	int n, a, b;
	cin >> n >> a >> b;

	int ans;
	ans = a * n;

	if(ans < b)
	{
		cout << ans << endl;
	}
	else
	{
		cout << b << endl;
	}

	return 0;
}
