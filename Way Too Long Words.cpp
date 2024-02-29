#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    string l;
    for(int i=0;i<a;i++){
        cin>>l;
        if(l.length()>10){
            cout<<l[0]<<l.length()-2<<l[l.length()-1]<<endl;
        }
        else{
            cout<<l<<endl;
        }
    }
    return 0;
}
