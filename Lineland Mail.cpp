#include<iostream>
using namespace std;


int main(){
    long long int s ,minum,maxmum;
    cin>>s;
    long long int vec[s];

    for(int i=0;i<s;i++){
        cin>>vec[i];
    }
    for(int i=0;i<s;i++){
        if(i == 0){
            minum=abs(vec[i]-vec[i+1]);
            maxmum=abs(vec[s-1]-vec[i]);
        }
        else if(i == s-1){
            minum=abs(vec[i]-vec[i-1]);
            maxmum=abs(vec[i]-vec[0]);
        }
        else{
            minum=min(abs(vec[i]-vec[i-1]),abs(vec[i]-vec[i+1]));
            maxmum=max(abs(vec[i]-vec[0]),abs(vec[i]-vec[s-1]));
        }
        cout<<minum<<" "<<maxmum<<endl;
    }
    return 0;
}