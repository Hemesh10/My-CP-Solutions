#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;
const int N = 0;

// bool helper(int *arr, int n, int k) {
//     for(int i=1;i<n-1;i++) {
//         if(arr[i]==k) {
//             if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
//                 swap(arr[i], arr[i+1]);
//             } else break;
//         }
//     }
//     return arr[k-1]==k;
// }

void solve(int t) {
    while(t--) {
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        bool res = arr[0]==1;
        // for(int i=n;i>=2 && res;i--) {
        //     res = helper(arr, n, i);
        // }
        cout<<(res?"YES":"NO")<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
