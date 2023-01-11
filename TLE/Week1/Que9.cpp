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
	string a;
	cin>>a;
	int anton=0, danik=0;
	for (int i = 0; i < size; ++i)
	{
		
		if(a[i]=='A'){
           anton++;
		}
		else{
			danik++;
		}
	}
	if(anton>danik){
		cout<<"Anton"<<endl;
	}
	else if (anton<danik){
		cout<<"Danik"<<endl;
		
	}
	else{
		cout<<"Friendship"<<endl;
	}
	return 0;
}