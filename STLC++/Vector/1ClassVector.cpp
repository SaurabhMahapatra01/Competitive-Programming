#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

// Ways to initalize Vector

	vector<int>a;
	vector<int>b(4, 10);  //Print 10 four times
	vector<int>c(b.begin(), b.end());
	vector<int>d = {1, 3, 5, 7};

// Ways to iterate over the vector

// 1
	for (int i = 0; i < c.size(); ++i)
	{
		cout << c[i] << " ";
	}
	cout << endl;

// 2
	for (auto it = b.begin(); it != b.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

// 3
	for (int i : d)
	{
		cout << i << " ";
	}
	cout << endl;

//How to Take input in vector

	vector<int>v;
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		int value;
		cin >> value;
		v.push_back(value);
	}
	for (int z : v) {
		cout << z << " ";
	}
	cout << endl;
// Understand at  memory Level , What is the Diifference between d & v Working
	cout << "For v :" << endl;
	cout << v.size() << endl;
	cout << v.capacity() << endl; //size of underlying array
	cout << v.max_size() << endl; //maximum no of elements a vector can hold in the worst case acc to avbl memory in the system

	cout << "For d :" << endl;
	cout << d.size() << endl;
	cout << d.capacity() << endl;
	cout << d.max_size() << endl;
	return 0;

}