#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	string a[n];
	
//	vector <string> a(n);
	
	for(int i=0;i<n;i++) cin>>a[i];
		
	for(int i=0;i<n;i++){
		string str=a[i];
		swap(str[i],str[str.length()-i-1]);		

//		reverse(a[i].begin(),a[i].end());
		cout<<str<<endl;
		
	}
	
	return 0;
}
