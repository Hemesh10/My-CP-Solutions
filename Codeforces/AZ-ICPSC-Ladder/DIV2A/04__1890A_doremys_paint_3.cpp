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
        int n1 = arr[0], n2 = -1, flag = 1;
        for(int i=1;i<n;i++) {
            if(n2==-1 && arr[i]!=n1) n2 = arr[i];
            if(n2!=-1 && arr[i]!=n1 && arr[i]!=n2) {
                flag = 0;
                break;
            }
        }
        if(flag && n2!=-1) {
            int c1=0, c2=0;
            for(int i=0;i<n;i++) {
                c1 += arr[i]==n1 ? 1 : 0;
                c2 += arr[i]==n2 ? 1 : 0;
            }
            if(abs(c1-c2)>1) flag = 0;
        }
        cout<<(flag ? "Yes" : "No")<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
