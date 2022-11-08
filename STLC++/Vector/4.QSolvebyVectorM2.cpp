#include<bits/stdc++.h>
using namespace std;


class car
{
public:
	string car_name;
	int x, y;
	car() {

	}
	car(string n, int x, int y)
	{
		car_name = n;
		this->x = x;
		this->y = y;
	}
	int dist() {
		// return square of distance from origin
		return x * x + y * y;
	}
};
bool compare(car a, car b)
{
	int dista = a.dist();
	int distb = b.dist();

	if (dista == distb) {
		return a.car_name.length() < b.car_name.length();
	}
	return dista < distb;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int no_of_cars;
	cin >> no_of_cars;
	vector<car>v;
	for (int i = 0; i < no_of_cars; i++)
	{
		int x, y;
		string name;
		cin >> name >> x >> y;
		car temp(name, x, y);
		v.push_back(temp);

	}
	sort(v.begin(), v.end(), compare);

	for (auto p : v) {
		cout << "car " << p.car_name << " dist" << " " << p.dist() << " Location" << p.x << "," << p.y << endl;
	}


	return 0;
}