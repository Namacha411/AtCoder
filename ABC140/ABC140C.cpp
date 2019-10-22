#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef signed long long ll;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main()
{
	int n, in;
	vector<int> va, vb;

	//read
	cin >> n;
	rep(i, n - 1)
	{
		cin >> in;
		vb.push_back(in);
	}

	//solve
	int ans1 = 0;
	rep(i, n)
	{
		ans1 += vb[i];
	}
	ans1 += vb[0];

	int ans2 = 0;
	reverse(vb.begin(), vb.end());

	rep(i, n)
	{
		ans2 += vb[i];
	}
	ans2 += vb[0];

	int ans = min(ans1,ans2);

	//write
	cout << ans << endl;

	return 0;
}