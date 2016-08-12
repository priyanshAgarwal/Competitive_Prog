#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
	
	cout << setprecision (6) <<3/9.0<<endl; 

	int n,arr[n];
	float neg=0,pos=0,zero=0;
	cin>>n;
	
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		if(arr[i]>0) pos++;
		else if(arr[i]<0) neg++;
		else zero++;
	}
	
	cout << setprecision (6) << pos/n <<endl; 
	cout << setprecision (6) << neg/n <<endl; 
	cout << setprecision (6) << zero/n <<endl; 

	return 0;
}

