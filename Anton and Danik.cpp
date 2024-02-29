#include<iostream>
#include<string>
using namespace std;
int main(){

    //N
    string word;
    int no_games;
    cin>>no_games>>word;
    int a=0,d=0;
    for(int i=0;i<no_games;i++){
        if(word[i]=='A'){
            a+=1;
        }else{
            d+=1;
        }
    }
    if(a>d){
        cout<<"Anton";
    }
    else if (a==d){
        cout<<"Friendship";
    }
    else{
        cout<<"Danik";
    }

    return 0;
}