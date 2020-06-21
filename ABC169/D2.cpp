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

map<ll,ll> prime(ll n){
	map<ll,ll> mp;
	for(ll i = 2; i*i <= n; i++){
		while(n % i == 0){
			n /= i;
			mp[i]++;
		}
	}
	if(n > 1) mp[n] = 1;
	return mp;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	ll n; cin >> n;

	int ans = 0;
	for(auto t : prime(n))
		ans += (int)(sqrt(8*t.second+1)-1)/2;

	cout << ans << endl;
	return 0;
}