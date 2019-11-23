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
	int sum = 0;
	vector<int> w;

	int s;
	cin >> n;
	rep(i, n)
	{
		cin >> s;
		w.push_back(s);
		sum += s;
	}

	sum /= 2;
	sort(all(w));
	int sum2 = 0;
	rep(i,n)
	{
	}
	return 0;
}
