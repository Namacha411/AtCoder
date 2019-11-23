#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef unsigned long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
#define DEBUG
#define MAX (int)1e9

int main()
{
	int a, p;
	cin >> a >> p;

	p += a * 3;
	int ans = (p - (p % 2)) / 2;

	cout << ans << endl;
	return 0;
}