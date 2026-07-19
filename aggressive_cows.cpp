#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,c;
    cin >> n>> c;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(all(v));
    int max_dis=v[n-1]-v[0];
    int d=0;
    int a=0, b=max_dis -1;
    int ans=0;
    while(a<=b){
        int k=(a+b)/2;
        d=k+1;
        int count=1;
        int current= v[0];
        bool valid= false;
        for(int i=1; i<n; i++){
            if(v[i]>=d+current){
                current=v[i];
                count++;
            }
                if (count==c){
                valid= true;
                break;
            }
        }

            if (!valid){
            b=k-1;
            }
            else{
            ans=d;
            a=k+1;
            }
    }
    cout << ans << "\n";
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