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
	string s;
	for (int i = 0; i < size; ++i)
	{
		cin>>s;
		if(s.length()>10){
          cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
		}
		else{
			cout<<s<<endl;
		}
	}

	return 0;
}