#include<bits/stdc++.h>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()

#define DEBUG

int main()
{
	int a, b;
	cin >> a >> b;
	if(a >= 13) cout << b << endl;
	else if(a >= 6) cout << b/2 << endl;
	else cout << 0 << endl;
	return 0;
}
