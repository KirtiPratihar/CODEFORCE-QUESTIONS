#include<iostream>
using namespace std;
void abb(string s){
    if(s.size()>10){
        cout<<s[0]<<s.size()-2<<s.back()<<endl;
    }
    else{
        cout<<s<<endl;
    }
}
int main(){
    int k;
    cin>> k;
    string p;
    while(k--){
        cin>>p;
        abb(p);
    }
    return 0;
}
