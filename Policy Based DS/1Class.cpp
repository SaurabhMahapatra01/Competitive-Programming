#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        PBDS;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	PBDS st;
	st.insert(10);
	st.insert(8);
	st.insert(2);
	st.insert(4);
	st.insert(6);

	for (int i = 0; i < st.size(); ++i)
	{
		cout << i << " " << *st.find_by_order(i) << endl;
	}

	return 0;

}