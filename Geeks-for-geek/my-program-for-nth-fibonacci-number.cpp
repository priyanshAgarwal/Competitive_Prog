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

int fibonacci(int n)
{
	if(n<=1)
		return n;
	return fibonacci(n-1)+fibonacci(n-2);		
}

int main() {
    int q;
    cin >> q;
    
	cout<<fibonacci(q)<<endl;
    return 0;
}

