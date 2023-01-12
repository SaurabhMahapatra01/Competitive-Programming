#include<bits/stdc++.h>
using namespace std;

int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
   #endif
	int size;
	cin>>size;
	int max=0;
	for (int i = 1; i <=size; ++i)
	{
		int n;
		cin>>n;
		if(i==1){
			max = n;
		}
		if(n > max){
           max = n;
		}

	}
	cout<<max<<endl;

	return 0;
}