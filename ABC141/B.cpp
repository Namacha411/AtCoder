#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < n; i++)
#define all(x) x.begin(),x,end()

#define __INT_MAX__ 2147483647

#define DEBUG

int main()
{
	string s;
	cin >> s;
	int l = (int)(s.length());
	bool ans = true;

	for(int i = 1; i <= l; i++)
	{
		if(i % 2 == 1)
		{
			if(s[i-1] == 'L')
			{
				ans = false;
				break;
			}
		#ifdef DEBUG
			cout << s[i-1] << ' ';
		#endif
		} 
		if(i % 2 == 0)
		{
			if(s[i-1] == 'R')
			{
				ans = false;
				break;
			}
		}
	}
	#ifdef DEBUG
		cout << endl;
	#endif

	if(ans == true)
	{
		cout << "Yes" << endl;
	}
	if(ans == false)
	{
		cout << "No" << endl;
	}
	return 0;
}
