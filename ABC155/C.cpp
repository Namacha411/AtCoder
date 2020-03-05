#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;

#define INF (int)(1e9)

#define rep(i,n) for(int i=0; i<(n); ++i)
#define REP(i,start,end) for(int i=(start);i<=(end);++i)
#define all(n) begin(n),end(n)

#define DEBUG

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	vector<string> s(n);
	vi cnt(n,0);
	rep(i,n) cin >> s[i];

	map<string, int> dic;

	rep(i,n)
	{
		dic[s[i]] += 1;
	}

	int max = 0;
	rep(i,n)
	{
		if(max < dic[s[i]]) max = dic[s[i]];
	}

	for(auto i = dic.begin(); i != dic.end(); ++i)
	{
		if((i -> second) == max)
		{
			cout << i -> first << endl;
		}
	}
	return 0;
}