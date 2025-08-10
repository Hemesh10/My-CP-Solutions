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
        int n; cin>>n;
        string s; cin>>s;
        int cellC=0, flag=0;
        for(int i=0;i<n;i++) {
            cellC += s[i]=='.'?1:0;
            if(i<n-2 && s[i]==s[i+1] && s[i+1]==s[i+2] && s[i+2]=='.') {
                flag = 1;
                break;
            }
        }
        cout<<(flag?2:cellC)<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
