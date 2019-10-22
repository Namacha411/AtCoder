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
	bool c = true;
	string s;

	cin >> s;

	rep(i,3)
	{
		if(s[i] == s[i+1])
		{
			c = false;
		}
	}

	if(c == false) cout << "Bad" << endl;
	else cout << "Good" << endl;
	return 0;
}
