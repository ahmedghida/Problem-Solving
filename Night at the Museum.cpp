#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin>>a;
    int strt=97,no_move=0;
    for(int i=0;i<a.size();i++){
        int ptr=abs(int(a[i])-strt);
        if(ptr<13){
            no_move+=ptr;
        }
        else{
            no_move+=26-ptr;
        }
        strt=int(a[i]);
    }

    cout<<no_move;

    return 0;
}