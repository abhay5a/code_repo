#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int k=z/2;
        x=x+z-k;
        y=y+k;
        if(x>y){
            cout<<"First"<<endl;
        }
        else cout<<"Second"<<endl;
    }
    return 0;
}