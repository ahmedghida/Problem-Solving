#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long int x;
    cin>>n>>x;
    int no_childs=0;
    for(int i=0;i<n;i++){
        int d;
        char oper;
        cin>>oper>>d;
        if(oper=='-'){
            if(x>=d){
                x-=d;
            }
            else{
                no_childs++;
            }
        }
        else if(oper=='+'){
            x+=d;
        }
    }

    cout<<x<<" "<<no_childs;
    return 0;
}
