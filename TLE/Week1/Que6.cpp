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
	int even = 0, odd = 0, pos = 0, neg = 0;
	for (int i = 0; i < size; ++i)
	{
		int n;
		cin>>n;
		if(n%2==0){
          even++;
		}
		else{
			odd++;
		}
		if(n>0){
			pos++;
		}
		else if(n<0){
			neg++;
		}

	}
	cout<<"Even: "<<even<<endl;
	cout<<"Odd: "<<odd<<endl;
	cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg;
	return 0;
}