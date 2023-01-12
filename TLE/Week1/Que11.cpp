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
   int count=0;
   for (int i = 1; i < sqrt(n); ++i)
   {
   	if(n%i !=0){
   		count++;
   	} 
   	cout<<i;
   }
	return 0;
}