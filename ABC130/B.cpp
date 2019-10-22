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
	int n, x;
	int l[101] = {};

	cin >> n >> x;
	rep(i,n)
	{
		cin >> l[i];
	}

	int ans = 0;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		ans++;
		sum += l[i];
		if(sum > x) break;
	}
	cout << ans << endl;
	return 0;
}
