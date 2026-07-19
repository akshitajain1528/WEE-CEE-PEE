#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(all(v), [](const pair<int, int>& a, const pair<int, int>& b){
        return a.second < b.second;
    });

    int count=1;
    int end=v[0].second;
    for(int i=1; i<n; i++){
        if(v[i].first >= end){
            end= v[i].second;
            count++;
        }
    }
    cout << count << "\n";

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