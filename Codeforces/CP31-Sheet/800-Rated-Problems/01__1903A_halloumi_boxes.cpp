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
        int n, k; cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) {cin>>arr[i];}
        int flag = 1;
        for(int i=1;i<n;i++) {
            if(arr[i-1]>arr[i]) {
                flag = 0;
                break;
            }
        }
        if(flag || k>1) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
