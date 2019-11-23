#include <bits/stdc++.h>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define MAX (int)1e9

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()

#define DEBUG

int main()
{
	vector<int> v;
	int ans = MAX;

	int s;
	rep(i,3)
	{
		cin >> s;
		v.push_back(s);
	}
	sort(all(v));
	ans = v[0] + v[1];

	cout << ans << endl;
	return 0;
}
