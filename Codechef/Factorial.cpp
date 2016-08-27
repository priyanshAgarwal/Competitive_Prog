#include<iostream>

using namespace std;

int main()
{
	int n,a;
	cin>>n;
	while(n--){
		int res=0,i=5;
		cin>>a;
		while(i<=a){
			res=res+a/i;
			i*=5;
		}
		cout<<res<<endl;
	}
	return 0;
}
