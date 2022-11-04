#include<bits/stdc++.h>
using namespace std;

int ClearIthBit(int n, int pos) {
	int mask = ~(1 << pos);
	n = n &  mask;
	return n;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int num, pos;
	cin >> num >> pos;
	cout << ClearIthBit(num, pos);
	return 0;
}