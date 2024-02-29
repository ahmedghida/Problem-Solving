#include<iostream>
using namespace std;


int main(){
    int m,n;
    cin>>n;
    int birds[n];
    for(int i=0;i<n;i++){
        cin>>birds[i];
    }
    
    cin>>m;
    int j=0;
    while(j<m){
        int y,x;
        cin>>x>>y;
        x-=1;
        int left=abs(birds[x]-y);
        int right=y-1;
        birds[x]=0;
        if(x == 0){//at frist wire
            birds[x+1]+=left;
        }
        else if(x==(n-1)){//at last wire
            birds[x-1]+=right;
        }
        else{//between
            birds[x+1]+=left;
            birds[x-1]+=right;
        }
        j++;
    }

    for(int i=0;i<n;i++){
        cout<<birds[i]<<endl;
    }
    






    return 0;
}