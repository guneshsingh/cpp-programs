#include<iostream>
using namespace std;
int main(){int age;
cin>>age;
if(age>18){
    if(age<59){
        cout<<"Eligible";
    }
    else
    cout<<"not satisfactory";
}
else
cout<<"minor";
}