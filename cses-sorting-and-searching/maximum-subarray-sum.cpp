#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

struct Cmp{
  bool operator()(pair <ll, ll> &a, pair <ll, ll>&b){
      if (a.second == b.second) return a.first>b.first;
      return a.second<b.second;
  }  
};

int main() {
    ll n; cin>>n;
    ll ans = INT_MIN;
    ll curr = 0;
    
    for(ll i=0; i<n; i++){
        ll ele; cin>>ele;
        curr = max(curr, 0LL);
        curr += ele;
        ans = max(ans, curr);
    }
    
    cout<<ans;
    return 0;
}
