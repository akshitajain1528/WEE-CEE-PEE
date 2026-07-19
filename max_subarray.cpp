#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    vector<ll> nums;
    ll num;
    while(cin >> num){
        nums.pb(num);
    }
    int n= nums.size();
    ll current_sum=nums[0];
    ll best_sum=nums[0];
    for(int i=1; i<n; i++){
        current_sum= max(current_sum + nums[i], nums[i]);
        best_sum= max(best_sum, current_sum);
    }
    cout << best_sum << "\n";
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