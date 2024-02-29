#include<iostream>
#include<string>
using namespace std;

int main(){
    int num;
    string Colors;

    cin>>num>>Colors;
    int O_P=0;
    for(int i=0;i<num;i++){
        if(Colors[i]==Colors[i+1]){
            O_P+=1;
        }
    }

    cout<<O_P;


    return 0;
}