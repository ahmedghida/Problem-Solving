#include<iostream>
using namespace std;

int main(){

    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2;
    cin>>c1>>c2;
    cin>>d1>>d2;

    int a,b,c,d;
    for(a=1;a<=9;a++){

        for(b=1;b<=9;b++){
            for(c=1;c<=9;c++){
                for(d=1;d<=9;d++){
                    if(a!=b && a!=c&& a!=d && b!=c && b!=d && c!=d ){
                        if(a+b==r1 && a+c ==c1 && a+d == d1 && b+d ==c2 && c+d==r2 && b+c ==d2 ){
                            cout<<a<<" "<<b<<endl<<c<<" "<<d;
                            return 0;

                        }

                    }
                
                }
            }
        }
    }
    if((a==b && a==c && a==d && b==c && b==d)){
        cout<<-1;
    }
    return 0;
}