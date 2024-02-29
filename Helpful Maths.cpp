#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin>>a;
    vector<int> z;
    for(int i=0;i<a.length();i++){
        if(a[i]!='+'){
            z.push_back(int(a[i]-'0'));
        }
    }
    for(int i=0;i<z.size();i++){
       for(int j=i+1;j<z.size();j++){
            if(z[i]>z[j]){
                int temp=z[j];
                z[j]=z[i];
                z[i]=temp;
            }
       }
    }

    for(int i=0;i<z.size();i++){
        if(i==z.size()-1){
            cout<<z[i];
        }
        else{
            cout<<z[i]<<"+";
        }
    }

    return 0;
}
