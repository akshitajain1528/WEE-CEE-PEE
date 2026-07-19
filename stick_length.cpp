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

    sort(all(v));
    int k;
    ll median;
    if(n%2!=0){
        k= (n-1)/2;
        median=v[k];
    }
    else{
        int k1, k2;
        k1=n/2; 
        k2=n/2 -1;
        median= (v[k1]+v[k2])/2;
    }
    ll cost=0;
    for(int i=0; i<n; i++){
        cost+= abs(median-v[i]);
    }
    cout << cost << "\n";
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