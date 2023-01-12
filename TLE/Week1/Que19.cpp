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
	int nsize = size-1;
	for (int i = 1; i <=size; ++i)
	{
		for (int j = 1; j <= nsize; ++j)
		{
			cout<<" ";
		}
		for(int y = 1;y<i*2;y++){
			cout<<"*";
		}
		nsize--;
		cout<<endl;
	}

	return 0;
}