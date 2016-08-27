#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool IsCharDuplication(string s);


int main(){
    string s;
	bool checkFlag;
    int count=0;

	getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);

	checkFlag=IsCharDuplication(s);

	if(checkFlag)
		cout<<"not pangram"<<endl;
	else
		cout<<"panagram"<<endl;

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
