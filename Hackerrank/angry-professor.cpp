#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n,k;
		cin>>n>>k;
		int studentSum=0;
		studentSum=0;
		for(int i=0;i<n;i++) {
			int no;
			cin>>no;
			if(no<=0) studentSum++;
		}
		if(k>=studentSum) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}	
	return 0;
}
