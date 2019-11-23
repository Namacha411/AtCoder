#include<bits/stdc++.h>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()

#define DEBUG

int main()
{
	int n, k;
	string s;
	cin >> n >> k;
	cin >> s;

	int d = 'A'-'a';
	s[k-1] = s[k-1] - d;

	cout << s << endl;
	return 0;
}
