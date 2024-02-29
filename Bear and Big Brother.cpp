#include<iostream>
using namespace std;
int main(){

    //N
    int tall_1,tall_2;
    cin>>tall_1>>tall_2;
    int year=0;
    while(tall_1<=tall_2){
        tall_1*=3;
        tall_2*=2;
        year+=1;
    }
    cout<<year;
    return 0;
}