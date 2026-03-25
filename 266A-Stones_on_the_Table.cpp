#include<iostream>
using namespace std;

void ccd(string s){
    int count=0;
    for(int i=0;i<(int)s.size()-1;i++){
        if(s[i]==s[i+1]){
            count+=1;
        }
    }
    cout<<count<<endl;
}

int main(){
    string s= "";
    int k;
    cin>>k;
    char p;
    while(k--){
        cin>>p;
        s+=p;
    }
    ccd(s);
    return 0;
    
}
