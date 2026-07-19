#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,x;
    cin >>n>>x;
    vector<int> weight(n);
    for(int i=0;i<n;i++){
        cin >> weight[i];
    }
    sort(all(weight));

    int i=0,j=n-1;
    int count=0;
    while(i<n && j>=0 && i<=j){
        if(j==i){
            count++;
            break;
        }
        if(weight[j]>=x){
        count ++;
        j--;
        }
        else if(weight[j]+weight[i]<=x){
            i++;
            j--;
            count++;
        }
        else if(weight[j]+weight[i]>x){
            j--;
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