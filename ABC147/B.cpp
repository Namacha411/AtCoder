#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()
#define DEBUG

int main()
{
	string s;
	cin >> s;

	int ans = 0;

	for(int i = 0; i  < (s.size() - (s.size() % 2)) / 2; i++)
	{
		if(s[i] != s[s.size() - 1 - i]) ans++;
	}

	cout << ans << endl;
	return 0;
}
