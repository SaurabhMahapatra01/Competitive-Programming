#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	if ((n & (n - 1)) == 0) {
		cout << "Power of 2";
	}
	else {
		cout << "Not a power of 2";
	}

	return 0;
}