#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1e9+7;
const long long INF = 1e18;
const double PI = 3.1415926535897932384626;
const int N = 0;

int gcd(int a, int b) {
    while(b!=0) {
        a = a%b;
        swap(a, b);
    }
    return a;
}

void solve(int t) {
    while(t--) {
        int a, b; cin>>a>>b;
        if(b%a == 0) cout<<b*(b/a)<<'\n';
        else cout<<a / gcd(a, b) * b<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
