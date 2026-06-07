#include <iostream>
using namespace std;

int main(){
    int k,l;
    cin>>k>>l;
    int count=0;
    while(k<=l){
        k=k*3;
        l=l*2;
        count+=1;
        
    }
    cout<<count;
    return 0;
}
