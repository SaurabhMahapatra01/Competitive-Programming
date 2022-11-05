#include<bits/stdc++.h>
using namespace std;

int setIthBit(int n, int pos) {
	int mask = (1 << pos);
	n = (n | mask);
	return n;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, pos;
	cin >> n >> pos;
	cout << setIthBit(n, pos);
	return 0;
}