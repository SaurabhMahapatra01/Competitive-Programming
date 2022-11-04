#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int value;
	cin >> value;
	if (value & 1) {  //Bitwise & op to check that the bit nu is odd and even
		cout << "Odd " << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}