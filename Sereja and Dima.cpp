#include<iostream>
using namespace std;




int main(){
    int no_cards;
    cin>>no_cards;
    int cards[no_cards];
    for(int i=0;i<no_cards;i++){
        cin>>cards[i];
    }
    int i=0,j=no_cards-1,s=0,d=0,z=0;

    while (i<=j)
    {
        int max=0;
        for(int a=i;a<=j;a++){
            if(cards[a]>max){
                max=cards[a];
            }
        }
        if(max == cards[j]){
            j--;
        }
        else if(max == cards[i]){
            i++;
        }
        if(z%2 ==0){
            s+=max;
        }
        else{
            d+=max;
        }
        z++;
    }
cout<<s<<" "<<d;
return 0;
}