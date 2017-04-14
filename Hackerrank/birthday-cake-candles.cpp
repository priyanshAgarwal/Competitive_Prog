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
	
	int n;
	cin>>n;
	vector <int unsigned> arr(n);
	for (int a0 = 0; a0 < n; a0++) {
		cin >> arr[a0];
	}

	double max = *max_element(arr.begin(), arr.end());

	cout << max << endl;
	return 0;
}
