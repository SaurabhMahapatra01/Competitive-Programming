#include<bits/stdc++.h>
using namespace std;

int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
   #endif
   double num;
   cin>>num;
   int Numint = num;
   double res = num-Numint;
   if(res !=0){
   	cout<<"float "<<Numint<<" "<<res<<endl;
   }
   else{
   	cout<<"int "<<Numint<<endl;
   }
	return 0;
}