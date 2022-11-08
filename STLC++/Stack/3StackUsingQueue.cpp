#include<bits/stdc++.h>
using namespace std;

template<typename t>

class stack {
	queue<t>qu1, qu2;
public:
	void push(t x) {
		qu1.push();
	}

	void pop(t x) {
		if (qu1.empty) {
			return;
		}
		while (qu1.size() > 1)
		{
			t element = qu1.front();
			qu2.push(element);
			qu1.pop();
		}
		qu1.pop();
		swap(qu1, qu2);
	}
	t top();
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

	return 0;
}