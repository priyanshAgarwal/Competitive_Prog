#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int t;cin>>t;
	while(t--){
		long long int i=1,a,fd;
		cin>>a;fd=0;
		while(a/pow(5,i)>0)
		{			
			fd+=(a/pow(5,i));
			i++;
		}
	cout<<fd<<endl;
	}
}
 
