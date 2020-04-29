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
	string s;
	cin >> s;

	bool ans = true;
	if(s[0] != 'A') ans = false;
	if(s.substr(2,s.length()-3).find('C')==string::npos)
		ans = false;
	int cnt = 0;
	rep(i, s.length()){
		if(s[i] >= 'a' && s[i] <= 'z') cnt++;
	}
	if(s.length()-2 != cnt) ans = false;
	
	cout << (ans ? "AC" : "WA") << endl;
	return 0;
}