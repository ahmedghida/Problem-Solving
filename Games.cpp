#include<iostream>
using namespace std;

int main(){
    int num,z=0;
    cin>>num;
    int home[num],away[num];

    for(int i=0;i<num;i++){
        cin>>home[i]>>away[i];
    }
    
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(home[i]==away[j])z++;
        }
        
    }

    cout<<z<<endl;
    

    return 0;
}