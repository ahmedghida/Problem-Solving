#include<iostream>
#include<string>
using namespace std;


int main(){
    string A,B,L_side,R_side;
    cin>>A>>B;
    for(int i=0;i<A.length();i++){
        if(A[i] == '|'){

            L_side=A.substr(0,i);
            R_side=A.substr(i+1,A.length());
            break;
        }
    }
    for(int j=0;j<B.length();j++){
        if(R_side.length()>L_side.length()){
            L_side.push_back(B[j]);
        }
        else if(R_side.length()<=L_side.length()){
            R_side.push_back(B[j]);
        }
    }

    if(R_side.length()==L_side.length()){
        cout<<L_side<<"|"<<R_side<<endl;
    }
    else{
        cout<<"Impossible";
    }


    return 0;
}