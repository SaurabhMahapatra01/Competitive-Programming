#include<bits/stdc++.h>
using namespace std;


int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
   #endif
	double a, b, c, d;
	cin>>a>>b>>c>>d;
	double ab = log(a)*b;
	double cd = log(c)*d;

	if(ab>cd){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

	return 0;
}