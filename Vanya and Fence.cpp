#include<iostream>
using namespace std;

int main(){
    int fence_hieght,no_people;
    cin>>no_people>>fence_hieght;
    int person_height,width=0;
    for(int i=0;i<no_people;i++){
        cin>>person_height;
        if(person_height>fence_hieght){
            width+=2;
        }else{
            width+=1;
        }
    }
    cout<<width;

    return 0;
}