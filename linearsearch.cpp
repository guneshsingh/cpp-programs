#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n;
   vector <int> a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
    cin>>k;
    bool found=false;
    for(int i=0;i<n;i++){
        if(a[i]==k)
        {cout<<"FOUND"<<endl;
            found=true;
        break;}
        else
        continue;
    }
    if(!found){
        cout<<"NOT"<<endl;
    }

}