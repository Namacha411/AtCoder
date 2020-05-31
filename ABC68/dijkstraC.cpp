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
const ld PI = acosl(-1);

#define rep(i,n) for(int i=0; i<(n); ++i)
#define all(n) n.begin(),n.end()

void debug(const vector<vi> &vvi){
    for(auto vi : vvi){
        for(auto t : vi){
            printf("%d ", t);
        }
        printf("\n");
    }
}

void dijkstra(vector<vi> vvi, int g){
    
}

int main(){
    int n, m;
    cin >> n >> m;
    n--;
    vector<vector<int>> teikibin(n);
    rep(i, m){
        int a, b;
        cin >> a >> b;
        a--; b--;
        teikibin[a].push_back(b);
    }


    return 0;
}