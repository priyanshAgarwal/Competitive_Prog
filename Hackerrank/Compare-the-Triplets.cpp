#include<iostream>

using namespace std;

int main(){
	int a[3];
	int b[3];
	
	int scoreA=0,scoreB=0;
	
	for(int i = 0; i < 3; i++) scanf("%d", &a[i]);
	for(int i = 0; i < 3; i++) scanf("%d", &b[i]);

	for (int i=0;i<3;i++){
		if(a[i]>b[i]) scoreA++;
		if(a[i]<b[i]) scoreB++;
	}
		
	cout<<scoreA<<" "<<scoreB<<endl;

}
