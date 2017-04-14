#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int no;
	cin>>no;
	vector<string> letter(no);
	for(int i=0;i<no;i++){
		int deleteCount=0;
		cin>>letter[i];
		string str=letter[i];
		for(int k=0;k<str.length();k++){
			if(str[k]==str[k+1])
				deleteCount++;
		}
		cout<<deleteCount<<endl;
	}
	return 0;
}
