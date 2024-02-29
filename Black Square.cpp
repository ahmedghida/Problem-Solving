#include<iostream>
#include<string>
using namespace std;

int main(){
    int num[4],Cal=0;
    string S;
    for(int i=0;i<size(num);i++){
        cin>>num[i];
    }
    cin>>S;
    for(int i=0;i<S.size();i++){
        if(S[i]=='1'){
            Cal+=num[0];
        }
        else if(S[i]=='2'){
            Cal+=num[1];
        }
        else if(S[i]=='3'){
            Cal+=num[2];
        }
        else if(S[i] == '4'){
            Cal+=num[3];
        }
    }

    cout<<Cal;
    return 0;
}