#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using P = pair<int, int>;

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;
const int NIL = -1;

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;

	for(int i = n; i < 1000; i++)
	{
		vi num;
		int nx = i;
		while(nx != 0)
		{
			num.push_back(nx % 10);
			nx /= 10;
		}
		reverse(all(num));
		if(num[0] == num[1] && num[0] == num[2])
		{
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}