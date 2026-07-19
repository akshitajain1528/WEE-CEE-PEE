#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    ll total_sum=0;
    for(int i=0; i< n ; i++){
        total_sum+=v[i];
    }
    sort(all(v));
    ll ans=0;

    if ((ll)v[n-1]*2 >= total_sum){
        ans=(ll)v[n-1]*2;
    }

    else{ans=total_sum;}
    
    cout << ans << "\n";
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