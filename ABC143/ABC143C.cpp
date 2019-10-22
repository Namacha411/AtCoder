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
	string s;

	cin >> n;
	cin >> s;

	for(int i = 0; i < n; i++)
	{
		if(s[i] == s[i+1])
		{
			s[i] = '\0';
		}
	}

	int ans = 0;
	rep(i, s.size())
	{
		if(s[i] != '\0')
		{
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}