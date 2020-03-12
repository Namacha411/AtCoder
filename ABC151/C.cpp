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
const ld PI = acos(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, m;
	cin >> n >> m;
	vector<pair<int, string>> submit(m);
	rep(i, m)
		cin >> submit[i].first >> submit[i].second;

	vector<pair<int, bool>> pena(n, make_pair(0, true));
	int ac = 0;
	rep(i, m)
	{
		if(submit[i].second == "WA")
			if(pena[submit[i].first - 1].second)
				pena[submit[i].first - 1].first ++;
		else
		{
			pena[submit[i].first - 1].second = false;
			ac++;
		}
	}

	int ans = 0;
	rep(i, n) ans += pena[i].first;

	cout << ans << ' ' << ac << endl;
	return 0;
}