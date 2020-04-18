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
	int n;
	cin >> n;
	string s;
	cin >> s;

	ll r = count(s.cbegin(), s.cend(),'R');
	ll g = count(s.cbegin(), s.cend(),'G');
	ll b = count(s.cbegin(), s.cend(),'B');
	ll ans = r * g * b;
	rep(j, n){
		rep(i, j){
			int k = 2*j - i;
			if(k < n){
				if(s[i] == s[j]) continue;
				if(s[i] == s[k]) continue;
				if(s[j] == s[k]) continue;
				ans--;
			}
		}
	}

	cout << ans << endl;
	return 0;
}