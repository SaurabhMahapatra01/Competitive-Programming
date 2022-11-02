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

	list<string> l2 {"apple", "Pineapple", "Guava", "Banana", "Pineapple"};
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


// Remove a elment from a list
	string ele;
	cin >> ele;
	l2.remove(ele);

	for (string s : l2) {
		cout << s << " ";
	}
	cout << endl;
// Insert Element in the list

	auto it = l2.begin();
	it++;
	l2.insert(it, "Juice");

	for (string s : l2) {
		cout << s << " ";
	}
	return 0;
}