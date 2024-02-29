#include<iostream>
using namespace std;


int main(){
    int l;
    cin>>l;
    int vec[l];

    for(int i=1;i<=l;i++){
        int value;
        cin>>value;
        vec[value]=i;
    }

    for(int i=1;i<=l;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}