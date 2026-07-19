#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> coins(n);
    for(int i=0; i<n; i++){
        cin >> coins[i];
    }
    sort(all(coins));
    ll target=1;
    for(int i=0; i<n; i++){
        if((ll)coins[i]<= target){
            target+=(ll)coins[i];
        }
        else{break;}
    }
    cout << target << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}