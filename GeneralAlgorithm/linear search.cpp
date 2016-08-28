#include<iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	for (int i=0;i<t;i++){
		int x1,y1,x2,y2,x,y;
		cin>>x1>>y1>>x2>>y2;
		
	    x= 2*x2 - x1;
    	y = 2*y2 - y1;
    	
    	cout<<x<<" "<<y<<endl;
	}
	
	
	
	return 0;
}

