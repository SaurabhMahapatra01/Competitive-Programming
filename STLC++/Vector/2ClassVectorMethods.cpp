#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int>v = {1, 3, 5, 7, 9, 8, 6, 4, 2};
// 1. Push Back Opertion. Takes [O(1)] for most of the time
	v.push_back(10);
	for (int i : v) {
		cout << i << " ";
	}

	cout << endl;
// 2. Pop Back Operation. Takes [O(1)] Time
	v.pop_back();  //removes Last Element
	for (int i : v) {
		cout << i << " ";
	}

	cout << endl;
// 3. Insert Elements in the middle. Takes [O(n)] Time
	v.insert(v.begin() + 5, 11); //insert 11 at 5th position
	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;
	v.insert(v.begin() + 9, 3, 12);  //Insert same element Multiple times
	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;

// 4. Erase elements in the middle. Takes [O(n)] Time

	v.erase(v.begin() + 5);  //erase element of 5th Position
	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;
	v.erase(v.begin() + 8, v.begin() + 11); //Erase multiple elements from position 8 to  position 11
	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;

//  Size of Vector
	cout << v.size() << endl;
	cout << v.capacity() << endl;

//5. Remove all Elements
	v. clear(); //It deletes the all elements, but it dosen't delet the memory occupied the by the array
	for (int i : v) {
		cout << i << " ";
	}
	if (v .empty()) {
		cout << "Empty Vector!" << endl;
	}
	cout << "Size is Zero! : " << v.size() << endl;

// 6. Find Front and Last Element is vector
	v.push_back(2);
	v.push_back(4);
	v.push_back(6);
	cout << v.front() << endl; //find Front element of vector
	cout << v.back() << endl; //find last element of vector

// Reverse Function to Avoid doubling
	// v.reserve(100);

	return 0;
}