/*
Unique Number - Given 3N + 1 Numbers,
 where every number is coming Thrice expect
 one numbers find those two Unique numbers
*/

#include<bits/stdc++.h>
using namespace std;



int NumFromBits(vector<int>SumOFarr) {
    int num = 0;
    for (int i = 0; i < 32; ++i)
    {
        num = num + (SumOFarr[i] * (1 << i));
    }
    return num;
}

int UniqueNo3(vector<int>arr) {
    vector<int>SumOFarr(32, 0);
    for (int i : arr)
    {
        updateSum(SumOFarr, x);
    }
    for (int i = 0; i < 32; ++i)
    {
        SumOFarr[i] = SumOFarr[i] % 3;
    }
    return NumFromBits(SumOFarr);
}
void updateSum(vector<int>&SumOFarr, int x) {
    for (int i = 0; i < 32; ++i)
    {
        int IthBit = x & (1 << i);
        if (IthBit) {
            SumOFarr[i]++;
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int>arr;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        arr.push_back(n);
    }

    cout << UniqueNo3(arr);

    return 0;
}