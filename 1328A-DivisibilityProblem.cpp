#include<iostream>
using namespace std;

void cd(int k, int l){
    
    int n=k%l;
    if(n==0){
        cout<<0<<endl;
    }
    else{
        cout<<l- n<< endl;
    }
    
}
int main(){
    int n,k,l;
    cin>>n;
    while(n--){
        cin>>k>>l;
        cd(k,l);
    }
    return 0;
}
