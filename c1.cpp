#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,v;
    int maxi=INT_MIN;
    string k;
    cin>>n;
    map<string,int>mpp;
    for(int i=0;i<n;i++){
        cin>>k>>v;
        mpp[k]=v;
    }
    string ans;
    for(const auto& i:mpp){
        if(i.second>maxi)
    {
        maxi=i.second;
        ans=i.first;
    }
}
cout<<ans<<" "<<maxi<<"\n";
    return 0;
}