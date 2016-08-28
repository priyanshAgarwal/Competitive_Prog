#include<iostream>

using namespace std;

int main(){
	
	int no,reversedNumber = 0, remainder;
	cin>>no;
	
	while(no!=0){
		remainder=no%10;	
		reversedNumber=reversedNumber*10+remainder;
		no/=10;	
	}
	cout<<reversedNumber<<endl;
	return 0;
}
