#include<bits/stdc++.h>
using namespace  std;
int fun(int n,vector<int>arr){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int s=0;
    for(auto i:mpp){
        if(i.first%2==0 && i.second>1){
            s+=i.second;
        }
    }
    cout<<s;
    return s;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    fun(n,arr);
    return 0;
}