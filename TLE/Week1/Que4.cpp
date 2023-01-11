#include<iostream>
using namespace std;

int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
   #endif

	int a;
	cin>>a;
	for (int i = 1; i <=a; ++i)
	{
		if(a%i==0){
			cout<<i<<endl;
		}
	}

	return 0;
}