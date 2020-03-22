#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)

int main()
{
	vector<long long> l(5);
	rep(i,5) cin >> l[i];
	int k; cin >> k;

	bool ans = true;
	rep(i,5)
	{
		rep(j,5)
		{
			if(abs(l[i] - l[j]) > k) ans = false;
		}
	}

	if(ans) cout << "Yay!" << endl;
	else cout << ":(" << endl;
}
