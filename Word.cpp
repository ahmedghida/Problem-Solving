#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cin>>word;

    int lower=0,upper=0;
    for(int i=0;i<word.size();i++){
        if(int(word[i])>=65 && word[i]<=90){
            upper+=1;
        }
        else{
            lower++;
        }
    }
    if(lower>=upper){
        for(int i=0;i<word.size();i++){
            word[i]=tolower(word[i]);
        }
    }
    else{
        for(int i=0;i<word.size();i++){
            word[i]=toupper(word[i]);
        }
    }

    cout<<word;
    return 0;
}