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
# include <cstdlib>
# include <climits>

using namespace std;

int main() {
	long unsigned max = 0, min = ULONG_MAX, sum = 0;
	vector <long unsigned> arr(5);
	for (int a0 = 0; a0 < 5; a0++) {
		cin >> arr[a0];
		sum += arr[a0];
		if (arr[a0]>max)
			max = arr[a0];

		if (arr[a0]<min)
			min = arr[a0];
	}
	//  Sort function incresese the complexity.
	//	sort(arr.begin(), arr.end());
	cout << sum - max << " " << sum - min << endl;
	return 0;
}
