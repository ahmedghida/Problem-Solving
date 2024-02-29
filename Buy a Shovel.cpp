#include<iostream>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int i=1;
    while(true){
        int n=(k*i);
        if((n-r)%10 == 0|| n%10 == 0){
            break;
        }
        i++;
    }
    cout<<i;

    return 0;
}