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

	if(s[0] >= 'a'){
		s[0] += 'A' - 'a';
	}
	for(int i = 1; i < s.length(); i++){
		if(s[i] <= 'Z'){
			s[i] -= 'A' - 'a';
		}
	}

	cout << s << endl;
	return 0;
}