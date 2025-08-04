#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;
const int N = 0;

void solve(int t) {
    while(t--) {
        int matrix[6][6], r, c;
        for(int i=1;i<6;i++) {
            for(int j=1;j<6;j++) {
                cin>>matrix[i][j];
                if(matrix[i][j]==1) {
                    r=i, c=j;
                }
            }
        }
        cout<<abs(r-3)+abs(c-3)<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    // cin>>t;
    solve(t);
}
