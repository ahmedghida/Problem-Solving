#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int unsolved_crimes=0,no_officers=0;
    for(int i=0;i<num;i++){
        int a;
        cin>>a;
        if(a==-1 && no_officers == 0){
            unsolved_crimes++;
        }
        else if(a==-1 && no_officers>0){
            no_officers--;
        }
        else if(a>0){
            no_officers+=a;
        }
        
    }

    cout<<unsolved_crimes;

    return 0;
}