#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

// Initialization of List
	list<int> l1{3, 9, 7, 1, 5};

	list<string> l2 {"apple", "Pineapple", "Guava", "Banana"};
	l2.push_back("Mango");

// Iterate Over List
	for (int i : l1) {
		cout << i << " ";
	}

	cout << endl;

	for (string s : l2) {
		cout << s << " ";
	}
	cout << endl;
	l1.sort();
	cout << "l1 in Sorted :";
	for (int i : l1) {
		cout << i << " ";
	}
	cout << endl;
	l2.sort();
	cout << "l2 in Sorted : ";
	for (string s : l2) {
		cout << s << " ";
	}
	cout << endl;
	l1.reverse();
	cout << "l1 in reverse : ";
	for (int i : l1) {
		cout << i << " ";
	}
	cout << endl;
	l2.reverse();
	cout << "l2 in reverse : ";
	for (string s : l2) {
		cout << s << " ";
	}

	return 0;
}