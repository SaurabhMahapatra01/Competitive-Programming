#include<bits/stdc++.h>
using namespace std;

int getIthBit(int n, int pos) {
	int mask = (1 << pos);
	return (n & mask) > 0 ? 1 : 0;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int num, pos;
	cin >> num >> pos;
	cout << getIthBit(num, pos) << endl;
	return 0;
}