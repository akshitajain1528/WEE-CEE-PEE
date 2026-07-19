#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> pos(n+1);
    for(int i=1; i<n+1; i++){
        int val;
        cin >> val;
        pos[val]=i;
    }

    int count=1;
    for(int i=1; i<n; i++){
        if (pos[i+1]<pos[i]){
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