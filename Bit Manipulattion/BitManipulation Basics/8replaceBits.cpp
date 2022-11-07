/*
  *Que: repace Bits From N by m

 You are given two 32-bits numbers, N and M, and two  bit positions i and j.
 Write a method to set all bits between i and j in N equal to M.
 M(becomes a substring of N located at and starting at j).


 Example:
 N = 1000000000;
 M = 10101
 i = 2, j = 6
 Output : 1001010100

*/
#include<bits/stdc++.h>
using namespace std;

int clerBeitsInRange(int n, int i, int j) {
	int a = ~(0) << (j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;
	n = n & mask;
	return n;
}

int replaceBits(int N, int i, int j, int M) {
	clerBeitsInRange(N, i, j);
	int mask = (M << i);
	N = N | mask;
	return N;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int N, i, j, M;
	cin >> N >> i >> j >> M;
	cout << replaceBits(N, i, j, M);
	return 0;
}