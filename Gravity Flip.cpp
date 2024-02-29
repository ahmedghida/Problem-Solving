#include<iostream>
using namespace std;

int main(){
    int L;
    cin>>L;
    int arr[L];
    for(int i=0;i<L;i++){//entering elements 
        cin>>arr[i];
    }
    for(int i=0;i<L;i++){//sorting
        for(int j=1;j<L;j++){
            if(arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;

            }
        }
    }

    for(int i=0;i<L;i++){//printing
        cout<<arr[i]<<" ";
    }

    return 0;
}