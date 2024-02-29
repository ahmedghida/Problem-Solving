#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    //cin>>a; the input had spaces and string stops when it saw space so we need another method to take the line 
    getline(cin,a);  
    set<char> letters;

    for(int i=0;i<a.length();i++){
        if(a[i] != '{'&&a[i] != '}' && a[i] != ',' && a[i] != ' '){
            letters.insert(a[i]);
        }
    }
    cout<<letters.size()<<endl;

    return 0;
}
