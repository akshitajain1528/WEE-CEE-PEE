#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    sort(all(a));
    sort(all(b));

    int i=0, j=0;
    int count=0;
    int best=0;
    while(i<n && j<n){
    if(a[i]< b[j]){
        count++;
        i++;}
    else if(b[j] < a[i]){
        count--;
        j++;
    }
    else if(a[i]==b[j]){
        i++;
        j++;
    }
    best=max(best,count);
    }
    cout<< best << "\n";
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