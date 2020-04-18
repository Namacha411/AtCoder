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
const ld PI = acosl(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	string s, t;
	cin >> s >> t;

	bool ans = false;
	rep(i, s.length()){
		cerr << s << endl;
		if(s == t) ans = true;
		s = s.substr(1, s.length()-1) + s[0];
	}

	cout << (ans ? "Yes" : "No") << endl;
	return 0;
}