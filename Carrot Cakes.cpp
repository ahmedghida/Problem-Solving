#include<iostream>
using namespace std;

int main() {
    int N,T,K,D;
    cin>>N>>T>>K>>D;
    if(K>N){
        cout<<"NO";
    }
    else{
        int max_time=(N/K)*T;
        int t_time=max_time-abs(T-D);
        if(t_time<max_time){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}
