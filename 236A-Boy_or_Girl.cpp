/// solution-1
#include <iostream>
#include <set>
#include <string>
using namespace std;
void numcheck(string s){
    set<char> p;
    for(char c : s){
        p.insert(c);
    }
    int d= p.size();
    if(d%2==0){
        cout<<"CHAT WITH HER!";
        
    }
    else{
        cout<<"IGNORE HIM!";
    }
} 

int main(){
    string k;
    cin>> k;
    numcheck(k);
    return 0;
    
}
