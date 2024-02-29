#include<iostream>
#include<string>
using namespace std;

//n^2
int main(){
    string a;
    cin>>a;
    int count=0;
    
    for(int i=0;i<a.length();i++){
        int flag=1;
        for(int j=i+1;j<a.length();j++){
            if(a[i]==a[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            count+=1;
        }
    }
    if(count%2==1){
        cout<<"IGNORE HIM!\n";
    }
    else{
        cout<<"CHAT WITH HER!\n";
    }
    return 0;
}