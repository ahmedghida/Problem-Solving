#include<iostream>
using namespace std;



int main(){
    int n,m,pairs=0;
    cin>>n>>m;
    int max=(n+m)/5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=max;j++){
            int result=(5*j)-i;
            if (result<=m &&result>0)
            {
                //cout<<"["<<i<<","<<result<<"]"<<endl;
                pairs++;
            }
            
            
        }
    }
    cout<<pairs<<endl;

    return 0;
}