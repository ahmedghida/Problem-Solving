#include<bits\stdc++.h>
using namespace std;

int main(){
    int L,Head;
    cin>>L>>Head;
    int tail=abs(7-Head);

    for(int i=0;i<L;i++){
        int a,b;
        cin>>a>>b;
        if(a==Head||a==tail||b==Head||b==tail){
            cout<<"NO";
            break;
        }
        if(i==L-1){
            cout<<"YES";
        }
    }
    return 0;
}