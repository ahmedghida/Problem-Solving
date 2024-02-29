#include<iostream>
using namespace std;



int main(){
    int a,b;
    cin>>a>>b;
    int num=(a*2)+1;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int j=0,i=1;

    while(j<b){

        if(arr[i]>arr[i-1] && arr[i]>arr[i+1] && arr[i]-1 >arr[i+1] && arr[i]-1 >arr[i-1]){
            arr[i]=arr[i]-1;
            j++;
        }
        i++;
    }

    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}