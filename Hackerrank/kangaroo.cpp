#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int x1,v1,x2,v2;
    bool insideLoop=false;
    cin>>x1>>v1>>x2>>v2;
    
    for (int i=0; i<=10000; i++) {
        if (x1==x2) {
            insideLoop=true;
            cout<<"YES"<<endl;
            break;
        }
        x1+=v1;
        x2+=v2;
    }
    
    if(insideLoop==false)
        cout<<"NO"<<endl;

    return 0;
}

