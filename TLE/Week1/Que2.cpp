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
	for (int i = 1; i <=12; ++i)
	{
	   cout<<a<<" * "<<i<<" = "<<a*i<<endl; 
	}

	return 0;
}