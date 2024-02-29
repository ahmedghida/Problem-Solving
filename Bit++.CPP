#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int l;
    cin>>l;
    int x=0;
    for(int i=0;i<l;i++){  
        string a;
        cin>>a;
        for(int j=0;j<a.length();j++){
            if(a[j]=='+'){
                x++;
                break;
            }
            else if(a[j]=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x;
    return 0;
}