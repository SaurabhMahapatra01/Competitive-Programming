#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
   #endif
	ll a, b;
	cin>>a>>b;
	cout<<(a%10) + (b%10)<<endl;

	return 0;
}