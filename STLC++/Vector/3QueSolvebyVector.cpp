/* Que is you are a person who want to book a cab and there
are lets say  n no. of cabs which are available around you
may be you are given x, y location of cab x1y1, x2y2,....xnyn
you are standing at origin so u want to know about distances of
these cabs from you in sorted order and you  want to know which
cab is at what distance */


#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int>car1, pair<int, int>car2)
{
	int dis1 = car1.first * car1.first + car1.second * car1.second;
	int dis2 = car2.first * car2.first + car2.second * car2.second;

	if (dis1 == dis2) { //if dis1 is equal to dis2 the sort acc to x coordinate
		return car1.first < car2.first;
	}
	return dis1 < dis2;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int no_of_cars;
	cin >> no_of_cars;
	vector<pair<int, int>>v;
	for (int i = 0; i < no_of_cars; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));

	}
	sort(v.begin(), v.end(), compare);

	for (auto p : v) {
		cout << "cars : " << p.first << "," << p.second << endl;
	}


	return 0;
}