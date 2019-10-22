#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()

#define DEBUG

struct twoVal{
	int fir;
	int sec;
};

void getMax(){

}

int main(){

	int n, m, w;
	vector<twoVal> vw, ab;
	twoVal s;

	//input
	cin >> n >> m >> w;
	rep(i, n){
		cin >> s.fir >> s.sec;
		vw.push_back(s);
	}
	rep(i, m){
		cin >> s.fir >> s.sec;
		ab.push_back(s);
	}

	//solve
	return 0;
}