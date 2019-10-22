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
	int n;
	int d;
	cin >> n >> d;

	d = (2 * d) + 1;
	int ans = (n + d - 1) / d;

	cout << ans << endl;
	return 0;
}
