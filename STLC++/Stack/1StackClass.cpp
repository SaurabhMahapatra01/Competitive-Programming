#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	stack<int>s;
	for (int i = 0; i <= 5; ++i)
	{
		s.push(i);  //O(i)
	}

	while (!s.empty())
	{
		cout << s.top() << " "; //O(i)
		s.pop();   //O(1)
	}

	return 0;
}

