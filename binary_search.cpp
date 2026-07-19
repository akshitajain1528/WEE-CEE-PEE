#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()


// method1
void search(vector<int>& v, int left, int right, int x) {
    int mid= left + (right-left)/2;
    if(left>right){cout << -1 << "\n";
    return;}
    else{
    if(x<v[mid]){
        search(v,left,mid-1,x);
    }
    else if(x==v[mid]){
        cout << mid << "\n";
        return;
    }
    else if (x>v[mid]){
        search(v,mid+1,right,x);
    }}

}

//method2
void solve(int* arr, int n, int x){
int a=0, b=n-1;

while(a<=b){
    int k=(a+b)/2;
    if(arr[k]=x){
        cout << k<<"\n";
        break;
    }
    else if(arr[k]>x){
        b=k-1;
    }
    else{a=k+1;}
}

}

//method3
void solve(int* arr, int n, int x){
    int k=0;
    for(int b=n/2; b>=1; b/=2){
        while(k+b<n && x>=arr[k+b]){
            k+=b;
            if(arr[k]=x){
                cout << k << "\n";
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve(arr,n,x);
    }

    return 0;
}

