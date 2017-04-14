#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	for(int a=n-1;a>=0;a--)
		cout<<arr[a];	
	

	
    return 0;
}

