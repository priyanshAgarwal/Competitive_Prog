# include <iostream>
# include <cstring>
# include <cmath>
# include <cstdlib>
# include <cstdio>
# include <algorithm>
# include <vector>
# include <map>
# include <set>
# include <list>
# include <deque>
# include <new>
# include <stack>
# include <queue>
# include <iterator>
# include <sstream>
using namespace std;

int main() {

	int count=0;
	string word;
	cin >> word;
	for (int i = 0; i < word[i]; i++)
	{	
		if (word[i] == word[i + 1])
		{
			count++;
			cout << "No";
			break;
		}
		else if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y')
		{
			if (word[i + 1] == 'a' || word[i + 1] == 'e' || word[i + 1] == 'i' || word[i + 1] == 'o' || word[i + 1] == 'u' || word[i + 1] == 'y')
			{
				count++;
				cout << "No";
				break;
			}
		}
	}
	if (count == 0)
		cout << "Yes";
	return 0;
}
