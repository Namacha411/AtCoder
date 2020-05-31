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
	string s, t;
	cin >> s >> t;

	vector<char> atcoder = {'a','t','c','o','d','e','r'};
	bool ans = true;
	for(int i = 0; i < s.length(); i++){
		bool check = false;
		if(s[i] == '@'){
			for(char tmp : atcoder){
				if(t[i] == tmp) check = true;
			}
			if(!check) ans = false;
			break;
		}
		check = false;
		if(t[i] == '@'){
			for(char tmp : atcoder){
				if(s[i] == tmp) check = true;
			}
			if(!check) ans = false;
			break;
		}
		if(s[i] != t[i]) ans = false;
	}

	if(ans) cout << "You can win" << endl;
	else cout << "You will lose" << endl;
	return 0;
}