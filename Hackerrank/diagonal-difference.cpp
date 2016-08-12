#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,diagSum1,diagSum2;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    
    for(int i = 0;i < n;i++){
       for(int 	j = 0;j < n;j++){
          cin >> a[i][j];
          if(i==j) diagSum1+=a[i][j];
       }
    }

    int j=n-1;
    for(int i = 0;i < n;i++) {
    	diagSum2+=a[j][i];
    	j--;
	}
    cout<<abs(diagSum1-diagSum2)<<endl;


    
    
    return 0;
}

