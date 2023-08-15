#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main() {
 ll t;
 cin>>t;
 while(t--){
    string s;
    cin>>s;
 reverse(s.begin(),s.end());
 s+='0';
 ll c=0;
 for(ll i=0;i<s.size()-1;i++){
     if(s[i]>'4'){
         s[i+1]++;
       
         for(int j = i;j>=c;j--){
             s[j] = '0';
         }
         c = i;
     }
 }
 
 reverse(s.begin(),s.end());
 int d = 0;
 if(s[0]=='0'){
     d++;
 }
 
 
 for(d;d<s.size();d++){
     cout<<s[d];
 }
 cout<<endl;
     
 }
 return 0;
}