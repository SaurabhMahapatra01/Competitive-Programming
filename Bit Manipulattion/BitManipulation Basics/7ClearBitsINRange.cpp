#include<bits/stdc++.h>
using namespace std;

int clearBitsInRange(int n, int i, int j) {
	int a = ~(0) << (j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;
	n = n & mask;
	return n;
}

//How its work for understanding
/*
        4 3 2 1 0
  31 =  1 1 1 1 1
   we clear bit from 1 to 3 acc to input
   so,
        1 1 1 1 1
        1 0 0 0 1
      -------------
        1 0 0 0 1
        2^4        2^0

        so, 2^4 = 16
        and 2^0 = 1
        therefore, 16 + 1 = 17
        and 17 is ouput acc to above input
*/
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, i, j;
	cin >> n >> i >> j;
	cout << clearBitsInRange(n, i, j);
	return 0;
}