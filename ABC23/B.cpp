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
	string s;
	cin >> n >> s;

	list<char> acce;
	acce.push_back('b');
	int step = 0;
	for(int i = 1; acce.size() < n; i++){
		if(i % 3 == 1){
			acce.push_front('a');
			acce.push_back('c');
		}
		if(i % 3 == 2){
			acce.push_front('c');
			acce.push_back('a');
		}
		if(i % 3 == 0){
			acce.push_front('b');
			acce.push_back('b');
		}
		step++;
	}
	string a = "";
	while(!acce.empty()){
		a.push_back(acce.front());
		acce.pop_front();
	}

	cout << (a == s ? step : NIL) << endl;
	return 0;
}