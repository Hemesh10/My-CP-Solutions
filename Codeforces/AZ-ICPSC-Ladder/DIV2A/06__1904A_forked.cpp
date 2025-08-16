#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;
const int N = 0;

void solve(int t) {
    vector<pii> d = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    while(t--) {
        int a, b; cin>>a>>b;
        int k1, k2, q1, q2; cin>>k1>>k2>>q1>>q2;
        int res = 0;
        set<pii> st1, st2;
        for(pii &p:d) {
            st1.insert(make_pair(k1+(a*p.first), k2+(b*p.second)));
            st1.insert(make_pair(k1+(b*p.first), k2+(a*p.second)));
            st2.insert(make_pair(q1+(a*p.first), q2+(b*p.second)));
            st2.insert(make_pair(q1+(b*p.first), q2+(a*p.second)));
        }
        for(pii p:st1) {
            if(st2.find(make_pair(p.first, p.second)) != st2.end()) res++;
        }
        cout<<res<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
