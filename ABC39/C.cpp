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

	const string tbl[] = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};
	const string onkai = "WBWBWW";
	auto pos = (s.length() - s.find(onkai) + 1) % 7;

	cout << tbl[pos] << endl;
	return 0;
}