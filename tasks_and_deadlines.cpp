#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >>n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(all(v));
    ll reward=0;

    for(int i=0; i<n; i++){
        reward += v[i].second;
    }
    for(int i=0; i<n;i++){
        reward -= (ll)(v[i].first)*(n-i);
    }
    cout << reward << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}