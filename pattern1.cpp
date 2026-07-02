#include<iostream>
using namespace std;
void p1(int n){
    int m=0;
    int a=n+2;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--)
        cout<<"*";
        for(int j=0;j<=m;j++){
            cout<<" ";
        }
        for(int j=n-i;j>0;j--)
        cout<<"*";
        
        m+=2;
        
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<"*";
        for(int j=a;j>=0;j--)
        cout<<" ";
        for(int j=0;j<=i;j++)
        cout<<"*";
        
        a-=2;
        cout<<endl;
    }}
void p2(int n){
    int a=2*(n-1);
    int b=2;
    for(int i=1;i<2*n;i++){
        if(i<=n){
            for(int j=1;j<=i;j++)
            cout<<"*";
            for(int j=a;j>0;j--){
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            cout<<"*";
            
        }
        else {
            if(i == n+1)
            b = 2;
            for(int j=1;j<=2*n-i;j++)
            cout<<"*";
            for(int j=1;j<=b;j++)
            cout<<" ";
            for(int j=1;j<=2*n-i;j++)
            cout<<"*";
        }
        a-=2;
        b+=2;
        cout<<endl;
    }
}
    

int main(){
    int n;
    cin>>n;
    p2(n);
}
