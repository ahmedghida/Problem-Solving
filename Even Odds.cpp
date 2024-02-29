#include<iostream>
using namespace std;


int main(){ 
    long long int n,k,Mid_Point,result=0;
    cin>>n>>k;

    if(n%2==0){
        Mid_Point=n/2;
    }
    else{
        Mid_Point=(n+1)/2;
    }
    if(k<=Mid_Point){//odd
            result= (k*2)-1;
        }
        else{//even
            result=(k-Mid_Point)*2;
        }
    cout<<result;
    return 0;
}