#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int i=0,j=0;
    while(j<s2.length()){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else if(s1[i]!=s2[j]){
            j++;
        }
    }
    cout<<i+1;
    return 0;
}