#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    if(n<26){
        cout<<"NO";
    }
    else{
        for(int j=0;j<a.length();j++){
            a[j]=tolower(a[j]);
        }
        sort(a.begin(),a.end());
        int count=0;
        for(int j=0;j<a.length()-1;j++){
            if (a[j]!=a[j+1])
            {
                count++;
            }
        }
        if(count==25){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }

    return 0;
    }
