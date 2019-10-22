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
	int n, x, s;
	int ans = 0;
	vector<int> a;

	//input
	cin >> n >> x;

	rep(i,n)
	{
		cin >> s;
		a.push_back(s);
	}

	//solve
	s = 0;
	rep(i,n)
	{
		if(a[i] > s)
		{
			s = a[i];
		}
	}
	rep(i,n)
	{
		if(a[i]+x >= s)
		{
			ans++;
		}
	}

	//output
	cout << ans << endl;
	return 0;
}