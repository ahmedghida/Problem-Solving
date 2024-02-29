#include<iostream>
#include <string>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    int result=0;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(a.length()>=k+1){
            for(int j=0;j<=k;j++){
                if(a.find(char(48+j))== string::npos){
                    result--;
                    break;
                }
            }
            result++;
        }
    }
    cout<<result<<endl;
    return 0;
}