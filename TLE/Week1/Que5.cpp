#include<bits/stdc++.h>
using namespace std;

int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
   #endif
   int n;
   cin>>n;
   for (int i = 2; i <= sqrt(n); ++i)
   {
   	 if(n%i==0){
   	 	cout<<"NO"<<endl;
   	 	return 0;
   	 }
   }
   cout<<"YES"<<endl;

	return 0;
}