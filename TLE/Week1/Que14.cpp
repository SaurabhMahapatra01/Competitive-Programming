#include<bits/stdc++.h>
using namespace std;

int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
   #endif
	int n1, n2, n3, n4;
	cin>>n1>>n2>>n3>>n4;
	int start, end;
	if((n3<n1 && n4<n1) ||  (n3>n2 && n4>n2)){
		cout<<-1<<endl;
	}
	else{
		if(n1>n3){
          start = n1;
		}
		else{
			start = n3;
		}
		if(n2>n4){
			end = n4;
		}
		else{
			end = n2;
		}
		cout<<start<<" "<<end;
	}

	return 0;
}