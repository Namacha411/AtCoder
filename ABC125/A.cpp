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
	float t;
	cin >> a >> b >> t;
	t += 0.5;
	t = (t - ((int)t % a)) / a;
	return 0;
}
