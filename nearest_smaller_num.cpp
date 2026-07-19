#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    stack<pair<int,int>> st;
    for(int i=1; i<=n; i++){
        int current;
        cin >> current;

        while(!st.empty() && st.top().first >= current){
            st.pop();
        }

        if(st.empty()){
            cout << 0 << " ";
        }
        else {
            cout << st.top().second << " ";
        }

        st.push({current,i});
    }
    cout << "\n";
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