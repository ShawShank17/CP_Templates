#define ll long long
#define pii pair<int,int>
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

bool isPrime[1e6 + 1] = {true};

void sieve(){
  for(int i = 2; i*i<=1e6; i++){
    if(isPrime[i]==true){
      for(int j = i*i; j<=1e6; j+=i){
        isPrime[j]=false;
      }
    }
}


#include<bits/stdc++.h>
using namespace std;

void solve(){
  
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}

