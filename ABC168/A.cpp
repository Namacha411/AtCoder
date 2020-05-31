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
	string n; cin >> n;

	int hon[] = {2,4,5,7,9};
	int pon[] = {0,1,6,8};
	int bon = 3;
	for(int t : hon){
		if((n.back()-'0') == t){
			cout << "hon" << endl;
			return 0;
		}
	}
	for(int t : pon){
		if((n.back()-'0') == t){
			cout << "pon" << endl;
			return 0;
		}
	}
	cout << "bon" << endl;
	return 0;
}