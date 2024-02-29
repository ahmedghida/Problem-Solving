#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    string b;
    cin>>a>>b;
    if(a==b){
        cout<<-1<<endl;
    }
    else{
        cout<<max(a.length(),b.length());
    }

    return 0;

} 