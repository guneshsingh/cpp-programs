#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    if(n<2)
    return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    
}
return true;
}
int main(){
    int n;
    cin>>n;
    int m=2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
           while(!prime(m)){
            m++;
           }
           cout<<m<<" ";
           m++;
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<"\n";

    }
}