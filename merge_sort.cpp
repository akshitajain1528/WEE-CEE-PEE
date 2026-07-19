#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void merge(vector<int>& vec, int left, int right, int mid) {
    int i,j,k;
    int n1= mid-left+1;
    int n2= right-mid;

    vector<int> lvec(n1), rvec(n2);

    for(int i=0; i<n1; i++){
        lvec[i]=vec[left+i];
    }
    for(int j=0; j<n2; j++){
        rvec[j]=vec[mid+1+j];
    }

    i=0;
    j=0;
    k=left;

    while(i<n1 && j<n2){
        if(lvec[i]<=rvec[j]){
            vec[k]=lvec[i];
            i++;
            k++;
        }
        else {
            vec[k]=rvec[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        vec[k]=lvec[i];
        i++;
        k++;
    }
    while(j<n2){
        vec[k]=rvec[j];
        k++;
        j++;
    }
    
}

void mergesort(vector<int>& vec, int left, int right){
    if(left < right){

        int mid= left + (right- left)/2;

        mergesort(vec,left,mid);
        mergesort(vec,mid+1, right);

        merge(vec,left,right,mid);

    }
}

int main() {
int n;
cin >> n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin >> v[i];
}
mergesort(v,0,n-1);
for(auto i:v)
cout << i << " ";
return 0;
}