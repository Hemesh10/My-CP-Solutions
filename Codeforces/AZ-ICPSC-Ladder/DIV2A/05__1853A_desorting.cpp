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
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int flag=1, minD=arr[1]-arr[0];
        for(int i=1;i<n;i++) {
            if(arr[i]<arr[i-1]) {
                flag = 0;
                break;
            }
            minD = min(minD, arr[i]-arr[i-1]);
        }
        cout<<(!flag ? 0 : ((minD/2)+1))<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
