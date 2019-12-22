#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()
#define DEBUG

//SUN,MON,TUE,WED,THU,FRI,SAT
int main()
{
	string s;
	cin >> s;

	int ans;
	if(s == "SUN") ans = 7;
	if(s == "MON") ans = 6;
	if(s == "TUE") ans = 5;
	if(s == "WED") ans = 4;
	if(s == "THU") ans = 3;
	if(s == "FRI") ans = 2;
	if(s == "SAT") ans = 1;

	cout << ans << endl;
	return 0;
}