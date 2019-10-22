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

int main()
{
	double n,a = 0,b = 0;
	cin >> n;

	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 1) a++;
	}

	cout << a / n << endl;
	return 0;
}
