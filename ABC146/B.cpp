#include <bits/stdc++.h>
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
	cin >> n >> s;

	rep(i,s.size())
	{
		int diff = s[i] - 'A';
		if(diff + n >= 26) s[i] += (n - 26);
		else s[i] += n;
	}
	cout << s << endl;
	return 0;
}