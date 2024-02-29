#include<iostream>
#include<string>
using namespace std;


int main(){
    string a ,b;
    cin>>a>>b;
    int num1,num2;
    for(int i=0;i<a.length();i++){
        num1=tolower(a[i]),num2=tolower(b[i]);
        if(num1<num2){
            cout<<-1;
            return 0;
        }else if (num1>num2)
        {
            cout<<1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}