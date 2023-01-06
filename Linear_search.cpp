// Linear Search
// Time complexity--> O(n)
// Memory complexity--> O(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<"Found in the position--->"<<i+1<<endl;
        }
    }

    return 0;
}