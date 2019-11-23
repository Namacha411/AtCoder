#include<bits/stdc++.h>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()

#define DEBUG

int main()
{
	int n;
	cin >> n;

	vector<int> mul(81);
	rep(i,10)rep(j,10)
	{
		mul.push_back(i*j);
	}
	sort(all(mul));
	bool ans = binary_search(mul.begin(),mul.end(), n);

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
