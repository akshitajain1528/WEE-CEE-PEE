#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, m;
    cin >>n>>m;

    multiset<int> price;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        price.insert(x);
    }

    for(int i=0; i<m; i++){
        int max_price;
        cin >> max_price;

        auto k= price.upper_bound(max_price);

        if (k==price.begin()){
            cout << "-1\n";
        }
        else{
            --k;
            cout << *k << "\n";
            price.erase(k);
        }
    }
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