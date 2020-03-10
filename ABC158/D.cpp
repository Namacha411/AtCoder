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
	string S;
	cin >> S;

	deque<char> s(all(S));

	int q; cin >> q;
	bool rev = false;
	rep(cs, q)
	{
		int t;
		cin >> t;
		if(t == 1) rev = ~rev;
		if(t == 2)
		{
			int f;
			char c;
			cin >> f >> c;
			if(f == 1 ^ rev) s.emplace_front(c);
			if(f == 2 ^ rev) s.emplace_back(c);
		}
	}
	if(rev) reverse(all(s));

	for(auto c : s)
		cout << c;
	cout << endl;
	return 0;
}