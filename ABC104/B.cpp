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
	bool appire = false;
	for(int i = 2; i < s.length()-2; i++){
		if(s[i] == 'C') appire = true;
	}
	if(!appire) ans = false;
	rep(i, s.length()-2){
		if(i == 0) continue;
		if(i == s.find("C")) continue;
		if(s[i] < 'a' || s[i] > 'z')
			ans = false;
	}
	int c = 0;
	rep(i, s.length()){
		if(s[i] == 'C') c++;
	}
	if(c > 1) ans = false;

	cout << (ans ? "AC" : "WA") << endl;
	return 0;
}