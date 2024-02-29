#include<iostream>
#include<string>
using namespace std;

char search(char &s,char& move){
    const string a= "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=0;i<a.length();i++){
        if(s==a[i]){
            if(move == 'L'){
                return a[i+1];
            }
            else{
                return a[i-1];
            }
        }
    }
}

int main(){
    char x;
    string z;
    cin>>x>>z;

    for(int j=0;j<z.length();j++){
        char result =search(z[j],x);
        cout<<result;
    }


    return 0;
}