#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m,k;
    cin >>n>>m>>k;
    vector<int> wanted;
    for(int i=0; i<n; i++){
        int x;
        cin >>x;
        wanted.pb(x);
    }
    vector<int> available;
    for(int i=0; i<m; i++){
        int x;
        cin >>x;
        available.pb(x);
    }
    
    sort(all(wanted));
    sort(all(available));

    int i=0,j=0,matches=0;

    while(i<n && j<m){
    if(abs(wanted[i]-available[j])<=k){
        i++;
        j++;
        matches++;
    }
    else if(available[j] > wanted[i]+k){
        i++;
    }
    else{j++;}
}
cout << matches << "\n";
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