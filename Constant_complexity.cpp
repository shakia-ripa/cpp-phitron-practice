#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=max({a,b,c});
    int mini=min({a,b,c});
    int sum=a+b+c;
    int mul=a*b*c;
    cout<<maxi<<"\n"<<mini<<"\n"<<sum<<"\n"<<mul<<"\n";
    return 0;
}

// Compexity:-
// 1.Time complexity--->O(1)
// 2.Memory complexity--->O(1)