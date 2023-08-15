#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr;
        ll s=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                count++;
            }
            s+=x;
            arr.push_back(x);
        }
        if( n!=1 &&  (s-n)>=count )
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}