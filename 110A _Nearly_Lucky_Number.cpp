#include <iostream>
using namespace std;

int main(){
    string k;
    int count=0;
    cin>>k;
    for(char i:k){
        if (i=='4' ||i=='7'){
            count+=1;
        }
    }
    if(count==4||count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
