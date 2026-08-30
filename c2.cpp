#include<bits/stdc++.h>
using namespace std;
// int sumi(vector<int>arr,int s,int e){
//     int su=0;
//     for(int i=s;i<e+1;i++){
//         su+=arr[i];
//     }
//     return su;
// }
struct querdata
{
    string s;
    int start;
    int end;
};

int main(){
    int n;
    cin>>n;
    string s;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    int start,end;
    cin>>q;
    vector<querdata>ar;
    for(int i=0;i<q;i++){
        cin>>s;
        cin>>start>>end;
        querdata curr={s,start,end};
        ar.push_back(curr);
    }
    vector<int>prefix(n);
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=0;i<q;i++){
        cout<<" QueryID: "<<ar[i].s<<" | "<<" Totalusage: "<<prefix[ar[i].end]-(prefix[ar[i].start-1])<<"\n";
    }
    return 0;
}