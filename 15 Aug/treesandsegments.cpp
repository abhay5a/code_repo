
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

int dp[100100][2];
string s;
int n;
int rec(int level, int prev){
  //Max sum of possible values from level to n

  //Pruning

  //Base Case
  if(level == n){return 0;}

  //cache Check
  if(dp[level][prev]!=-1){
    return dp[level][prev];
  }

  //Compute
  int ans = 1e9;
  if(s[level] == '?'){
    if(prev == 0){
      ans = 1+rec(level+1, 1);
      ans = min(ans, rec(level+1, 0));
    }
    else{
      ans = 1+rec(level+1, 0);
      ans = min(ans, rec(level+1, 1));
    }
  }
  else{
    if(s[level] -'0'== prev){
      ans = rec(level+1, prev);
    }
    else{
      ans = 1+rec(level+1, 1-prev);
    }
  }
  //Save and Return
  return  dp[level][prev] = ans; 
}

void solution(){
  cin>>s;
  n = s.length();

  
  memset(dp, -1, sizeof(dp));
  int sol  = min(rec(0, 0), rec(0,1));
  cout<<sol<<endl;
  return;
}
#undef int
int main(){
  fast_io;
  int t=1;
  //cin >> t;
  
  while (t--){
    solution();   
  }
  return 0;
}