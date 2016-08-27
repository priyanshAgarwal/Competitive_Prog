#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	assert(1<=n && n<=10);
	string line;
	
	while(n--){
		cin>>line;
//		sort(line.begin(),line.end());
		
		for(int j=0; j<line.length();j++){
			if(line[j]!=line[j+1]){
				cout<<line[j];
			}
		}
		cout<<endl;
	}
	
	return 0;
}

