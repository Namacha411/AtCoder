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
	int ans = 0;
	vector<int> p;

	cin >> n;
	rep(i,n)
	{
		cin >> s;
		p.push_back(s);
	}

	for(int i = 1; i < n - 1; i++)
	{
		if(p[i-1] < p[i] && p[i] < p[i+1])
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
