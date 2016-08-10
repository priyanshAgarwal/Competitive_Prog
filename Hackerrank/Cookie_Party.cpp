#include <iostream>


using namespace std;


int main(){
    int n,m;
    float extra;
    cin >> n >> m;
    if(n>m){
    	extra=n-m;
    	cout<<extra<<endl;
	}
	else{
		cout<<0<<endl;
	}

    return 0;
}

