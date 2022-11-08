/*
 Unique Number, you are given 2n + 1 numbes where every
 Number come twice expect onrr number. Find out that unique Number

*/

#include<bits/stdc++.h>
using namespace std;

int UniqNumber(vector<int>arr) {
	int n = arr.size();
	int cum_Xor = 0;
	for (int i = 0; i < n; ++i)
	{
		cum_Xor = cum_Xor ^ arr[i];
	}
	return cum_Xor;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int>arr;
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		int n;
		cin >> n;
		arr.push_back(n);
	}
	cout << UniqNumber(arr) << endl;
	return 0;
}