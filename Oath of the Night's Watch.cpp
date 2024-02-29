#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int size,count=0;
    cin>>size;
    long long int arr[size+1]={0};
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    sort(arr,arr+size);
    for(int i=1;i<size-1;i++){
        if(arr[i]>arr[0] &&arr[i]<arr[size-1]){
            count++;
        }
    }

    cout<<count<<endl;

}