#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define st string
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

int main()
{
    int i, before, after, t, P=0;
    st S;
    cin>>t;
    while( t-- )
    {
        cin>>S>>before>>after;
        if( before>=2400 && after>before )
            P=1;
    }
    if( P )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
