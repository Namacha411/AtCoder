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

int main(){
	string s;
	cin >> s;
	int Q; cin >> Q;
	string F = "";
	string B = "";
	bool isRev = false;
	rep(i, Q){
		int t; cin >> t;
		if(t == 1){
			isRev = !isRev;
		} else if(t == 2){
			int f; cin >> f;
			char c; cin >> c;
			if(f == 2 && !isRev) B.push_back(c);
			else if(f == 1 && isRev) B.push_back(c);
			else F.push_back(c);
		}
	}
	reverse(all(F));
	string ans = F + s + B;
	if(isRev) reverse(all(ans));

	cout << ans << endl;
	return 0;
}