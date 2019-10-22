#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()

//#define DEBUG

int main()
{
	string s;
	bool ans = false;

	//input
	cin >> s;

	//solve
	sort(all(s));
	if(s[0] == s[1] && s[1] != s[2] && s[2] == s[3]) ans = true;

#ifdef DEBUG
	cout << s << endl;
#endif
	if(ans)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}