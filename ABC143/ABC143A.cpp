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
	int a, b;
	cin >> a >> b;

	int ans = a - (2 * b);
	if(ans < 0)
	{
		ans = 0;
	}
	cout << ans << endl;
	return 0;
}
