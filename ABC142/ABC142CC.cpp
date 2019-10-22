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
	int n,s;
	int order[100000] = {};
	int num[100000] = {};

	cin >> n;
	rep(i, n)
	{
		cin >> order[i];
		num[order[i]] = i;
	}

	sort(order[0], order[n]);
	rep(i, n)
	{
		cout << num[order[i]] << ' ';
	}
	cout << endl;

	return 0;
}
