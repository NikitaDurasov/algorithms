#include<iostream>
using namespace std;

int main() {
    char c,p=-1,t=0;
    while(cin>>c) {
        if(p!=-1 && (p!='/' || c!='/')) {
            cout<<p;
            t++;
        }
        p=c;
    }
    if(p!='/' || t==0) {
        cout<<p;
    }
}
