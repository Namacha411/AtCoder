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
	string s; cin >> s;
	vi num(4);
	rep(i, 4) num[i] = int(s[i] - '0');

	const int n = 3;
	rep(bit, (1<<n)){
		vector<char> op;
		int res = num[0];
		rep(i, n){
			if(bit & (1<<i)){
				res += num[i+1];
				op.push_back('+');
			}
			else{
				res -= num[i+1];
				op.push_back('-');
			}
		}

		if(res == 7){
			rep(i, 4){
				cout << num[i];
				if(i != 3) cout << op[i];
			}
			cout << "=7\n";
			return 0;
		}
	}
	return 0;
}