#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,programers=0,pe=0,maths=0;
    cin>>a;
    vector<int> arr(a),indx_s1,indx_s2,indx_s3;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        /**/
        if(arr[i]==1){
            programers++;
            indx_s1.push_back(i+1);
        }
        else if(arr[i]==2){
            maths++;
            indx_s2.push_back(i+1);
        }
        else{
            pe++;
            indx_s3.push_back(i+1);
        }
    }
    int teams =min(min(programers,maths),pe);
    cout<<teams<<endl;
    for(int i=0;i<teams;i++){
        cout<<indx_s1[i]<<" "<<indx_s2[i]<<" "<<indx_s3[i]<<endl;
    }
    return 0;
}
