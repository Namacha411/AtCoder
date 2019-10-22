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
	vector<int> l;

	cin >> n;
	rep(i, n)
	{
		cin >> s;
		l.push_back(s);
	}

	sort(all(l));
	rep(i,n)
	{
		
	}
	return 0;
}
