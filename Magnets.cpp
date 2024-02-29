#include<iostream>
using namespace std;

int main(){
    int loop;
    cin>>loop;
    int a[loop];
    int num=0;
    for(int i=0;i<loop;i++){
        cin>>a[i];
        if(a[i]!=a[i-1]){
            num++;
        }
    }
    cout<<num;

    return 0;
}