#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()
#define DEBUG

int main()
{
	bool ans = true;

	int n;
	cin >> n;

	vector<ll> a(n), b(n);
	rep(i, n) cin >> a[i];
	rep(i, n) cin >> b[i];

	sort(all(a)); sort(all(b));
	rep(i, n)
	{
		if(a[i] < b[i]) ans = false;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}