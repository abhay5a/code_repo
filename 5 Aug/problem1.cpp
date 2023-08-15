#include<bits/stdc++.h>
using namespace std;
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int t=-1;
        if(is_sorted(a,a+n)){
            cout<<"0"<<endl;
            continue;
        }
        int r=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>=a[i-1])
            {
                continue;
            }
            else{
                r=i;
                break;
            }
        }
        int answer=*max_element(a,a+r);
        cout<<answer<<endl;
        }
        return 0;
    }