#include<bits\stdc++.h>
using namespace std;


void transform(int z){
    if((9-z)> z){
        cout<<z;
    }
    else{
        cout<<9-z;
    }
    
}

int main(){
    string a;
    cin>>a;


    for(int i=0;i<a.length();i++){
        if(i==0 && int(a[i]-'0')==9){
            cout<<a[i];
        }
        else{
        transform(int(a[i]-'0'));
        }

    }

    return 0;
}