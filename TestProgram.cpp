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

//This program is too slow Fib(100) would take 56,000 years to run this program;

int power(int n)
{
	long mul = 1;
	while (n>0)
	{
		mul *= n;
		n--;
	}

	return mul;
}

int main() {
	int q;
	cin >> q;

	cout << power(q) << endl;
	return 0;
}

