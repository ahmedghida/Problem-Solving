#include<iostream>
using namespace std;

int main(){
    
    int y,w;
    cin>>y>>w;
    int die_sides=6;
    int prob=0;
    for(int i=max(y,w);i<=die_sides;i++){
        prob++;
    }
    while(die_sides%2==0 && prob%2==0){
        die_sides=die_sides/2;
        prob=prob/2;
    }
    while(die_sides%3==0 && prob%3==0){
        die_sides=die_sides/3;
        prob=prob/3;
    }

    cout<<prob<<"/"<<die_sides;
    return 0;
}