#include<iostream>
using namespace std;

//n
int main(){
    int no_problems;
    cin>>no_problems;
    int P,V,T,No_sol;
    No_sol=P=V=T=0;
    for(int i=0;i<no_problems;i++){
        cin>>P>>V>>T;
        int sum=P+V+T;
        if (sum>=2)
        {
            No_sol+=1;
        }     
    }
    cout<<No_sol;
    return 0;
}