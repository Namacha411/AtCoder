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

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()
#define mp(a, b) make_pair(a, b)

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define DEBUG

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int n, p, m;

vector<string> getRow(P &pos, vector<string> &r, vector<string> &s)
{
	vector<string> row(2);
	row[0] = r[pos.first];
	row[1] = s[pos.first];
	return row;
}

vector<string> getCol(P &pos, vector<string> &r, vector<string> &s)
{
	vector<string> col(2);
	rep(i, n) col[0].push_back(r[i][pos.second]);
	rep(i, n) col[1].push_back(s[i][pos.second]);
	return col;
}

int stop(string s)
{
	int i;
	for(i = 0; i < s.size(); i++) if(s[i] == 'x') break;
	return i;
}

void search(P &pos, vector<string> &r, vector<string> &s)
{
	char ans;
	vector<string> row = getRow(pos, r, s);
	vector<string> col = getCol(pos, r, s);

	string rleft = row[0].substr(0, pos.first);
	string rright = row[0].substr(pos.first + 1);
	string rup = col[0].substr(0, pos.second);
	string rdown = col[0].substr(pos.second + 1);
	reverse(all(rleft));
	reverse(all(rup));

	string left = row[1].substr(0, pos.first);
	string right = row[1].substr(pos.first + 1);
	string up = col[1].substr(0, pos.second);
	string down = col[1].substr(pos.second + 1);

	char LEFT = left[rleft.size() - stop(rleft)];
	char RIGHT = right[stop(right)];
	char UP = up[up.size() - stop(rup)];
	char DOWN = down[stop(down)];

	if(s[pos.first][pos.second] == LEFT)
	{
		ans = 'L';
		pos = mp(pos.first, rleft.size() - stop(rleft));
	}
	else if(s[pos.first][pos.second] == RIGHT)
	{
		ans = 'R';
		pos = mp(pos.first, stod(rright));
	}
	else if(s[pos.first][pos.second] == UP)
	{
		ans = 'U';
		pos = mp(rup.size() - stop(rup), pos.second);
	}
	else if(s[pos.first][pos.second] == DOWN)
	{
		ans = 'D';
		pos = mp(stop(rdown), pos.second);
	}
	else
	{
		ans = 'L';
		pos = mp(pos.first, rleft.size() - stop(rleft));
	}

	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> p >> m;
	vector<string> row(n), sheets(n);
	rep(i, n) cin >> row[i];
	rep(i, n) cin >> sheets[i];

	P robo;
	rep(i, n) rep(j, n) if(row[i][j] == 'o') robo = make_pair(i, j);
	vector<P> hasira;
	rep(i, n) rep(j, n) if(row[i][j] == 'x') hasira.push_back(make_pair(i, j));

	rep(i, m) search(robo, row, sheets);
	return 0;
}