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
const ld PI = acos(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

struct ps {
	int p;
	string s;
};

int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	//cout << fixed << setprecision(6);
	int n, m;
	cin >> n >> m;
	vector<int> p(m);
	vector<string> s(m);
	rep(i, m) cin >> p[i] >> s[i];

	vector<bool> isAc(n+1, true);
	vector<int> WAnum(n+1, 0);
	int wa = 0;
	int ac = 0;
	rep(i, m){
		if(isAc[p[i]]){
			if(s[i] == "WA") WAnum[p[i]]++;
			else if(s[i] == "AC"){
				isAc[p[i]] = false;
				ac++;
				wa += WAnum[p[i]];
			}
		}
	}

	printf("%d %d\n", ac, wa);
	return 0;
}
