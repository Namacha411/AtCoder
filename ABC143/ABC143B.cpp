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
	int n, s;
	vector<int> d;

	cin >> n;
	rep(i, n)
	{
		cin >> s;
		d.push_back(s);
	}

	int ans = 0;
	rep(i, n)
	{
		rep(j,n)
		{
			if(i != j)
			{
				ans += d[i] * d[j];
			}
		}
	}

	cout << ans/2 << endl;
	return 0;
}
