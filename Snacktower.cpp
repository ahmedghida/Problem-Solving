#include<iostream>
using namespace std;


int main(){
    int size;
    cin>>size;
    int arr[size];
    int index[size+1];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=size;i++){

        index[arr[i-1]]=i;
    }
    for(int i=1;i<=size;i++){
        if(index[i]<index[i+1]){
            cout<<endl;
        }
        else{
            cout<<index[i];
        }
    }


    return 0;
}