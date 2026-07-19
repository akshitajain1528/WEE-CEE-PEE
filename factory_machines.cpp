#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(all(v));

    ll x = (ll)v[0] * k; // IMPORTANT SYNTAX 
    ll a = 0, b = x; 
    ll ans = 0;
    
    while(a <= b) {
        ll i = (a + b) / 2;
        ll sum = 0;
        
        for(int j = 0; j < n; j++) {
            sum += i / v[j];
            if (sum >= k) break; 
        }
        
        if(sum >= k) {
            ans = i;      
            b = i - 1;    
        } else { 
            a = i + 1;    
        }
    }
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
