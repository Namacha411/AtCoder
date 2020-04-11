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
	int n, a, b;
	cin >> n >> a >> b;
	string s;
	cin >> s;

	int passed = 0;
	int foreign = 0;
	rep(i, n){
		if(s[i] == 'c'){
			cout << "No\n";
		}
		else if(s[i] == 'a' && passed < a+b){
			cout << "Yes\n";
			passed++;
		}
		else if(s[i] == 'b' && passed < a+b && foreign < b){
			cout << "Yes\n";
			passed++;
			foreign++;
		}
		else{
			cout << "No\n";
		}
	}
	return 0;
}