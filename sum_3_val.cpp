#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, x;
    cin >> n>>x;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(all(v));

    for(int i=0; i<n; i++){
        int p = v[i].first;
        int needed= x-p;
        int a=i+1, b=n-1;
        while(a<b){
            if(v[a].first + v[b].first == needed){
                cout << v[i].second << " " << v[a].second << " " << v[b].second;
            }
            else if(v[a].first + v[b].first > needed){
                b--;
            }
            else if(v[a].first + v[b].first < needed){
                a++;
            }
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