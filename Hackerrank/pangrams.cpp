#include <string>
#include <limits>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool IsCharDuplication(string s);


int main(){
    string s;
	bool checkFlag;
    int count=0;

	getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);

	checkFlag=IsCharDuplication(s);

	if(!checkFlag)
		cout<<"not pangram"<<endl;
	else
		cout<<"pangram"<<endl;

    return 0;
}

bool IsCharDuplication(string s)
{   
	 vector<bool> mark(26, false);

	 for (int i = 0; i < s.length(); i++) {
		int ascii=(int)s[i];	
    	if(ascii>=65 && ascii<=90){
			mark[ascii-65]=true;
		}
	 }

	 for (int i=0; i<=25; i++)
       if (mark[i] == false)
            return (false);
	 return (true);
}
