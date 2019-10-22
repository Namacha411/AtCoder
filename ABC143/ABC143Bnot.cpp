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
	int n,k,s;
	vector<int> h;

	cin >> n >> k;
	rep(i, n)
	{
		cin >> s;
		h.push_back(s);
	}

	int ans = 0;
	rep(i, h.size())
	{
		if(h[i] >= k)
		{
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}
