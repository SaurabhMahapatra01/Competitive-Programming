#include<bits/stdc++.h>
using namespace std;

int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
   #endif
	int wtmln;
	cin>>wtmln;
	if(wtmln>2){
		if(wtmln%2==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}

	return 0;
}