#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()
#define DEBUG

int main()
{
	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;

	if(a1+a2+a3 >= 22) cout << "bust" << endl;
	else cout << "win" << endl;
	return 0;
}

