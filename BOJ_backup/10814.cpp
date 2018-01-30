#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main(){
    int n,i;
    int age;
    string name;
    list<string> l[201];
    cin>>n;
    for(i=0; i<n; i++){
        cin>>age;
        cin>>name;
        l[age].push_back(name);
    }
    for(i=1; i<=200; i++){
        while( !l[i].empty() ){
            name = l[i].front();
            l[i].pop_front();
            cout<<i<<" "<<name<<"\n";
        }
    }
    return 0;
}
