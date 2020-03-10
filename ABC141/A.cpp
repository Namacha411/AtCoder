#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

typedef signed long long ll;
typedef long double ld;

#define rep(i,n) for(int i = 0; i < n; i++)
#define all(x) x.begin(),x,end()

#define __INT_MAX__ 2147483647

#define DEBUG

int main()
{
	string str;
	cin >> str;
	if(str == "Sunny") cout << "Cloudy" << endl;
	if(str == "Cloudy") cout << "Rainy" << endl;
	if(str == "Rainy") cout << "Sunny" << endl;
	return 0;
}
