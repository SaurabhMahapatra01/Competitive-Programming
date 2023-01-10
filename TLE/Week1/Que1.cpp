#include<iostream>
using namespace std;

int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
   #endif

   int a, b;
   cin>>a>>b;
   if(b%a==0 || a%b==0){
   	cout<<"Multiples"<<endl;
   }
   else{
   	cout<<"No Multiples"<<endl;
   }
	return 0;
}