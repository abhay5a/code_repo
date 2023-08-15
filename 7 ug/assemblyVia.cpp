#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define pb push_back
#define loop(n) for(long long i=0;i<n;i++)
#define rloop(n) for(long long i=n-1;i>=0;i--)

ll m=1e9+7;

long long binpow(long long a, long long b) {
 if (b == 0)
 return 1;
 long long res = binpow(a, b / 2);
 if (b % 2)
 return (res%m * res%m * a)%m;
 else
 return res%m * res%m;
}

signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 #ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 #endif

int t;
cin>>t;
while(t--){

ll n;
cin>>n;

ll m=(n*(n-1))/2;
map<ll,ll> np;
ll arr[m];
loop(m){
 cin >>arr[i];
 np[arr[i]]++;
}

ll c=n-1;
vector<ll> vec;
for(auto it:np){
 if(c == it.second){
 vec.push_back(it.first);
 c--;
 } else {
 ll x=c,p=0;
 while( x>0 && it.second != p){
 p+=(x);
 vec.push_back(it.first);
 x--;
 }
 c=x; }
}

for(auto it:vec)cout<<it<<" ";
int x=vec.size();
while(x!=n){
 cout<<1000000000<<" ";
 x++;
}

 cout<<"\n";

}
 return 0;
}
