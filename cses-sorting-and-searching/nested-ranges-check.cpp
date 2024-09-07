#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair <long long, long long>;

struct Cmp{
  bool operator() (vector <ll>&a, vector <ll> &b){
      if (a[0] == b[0]) return a[1]>b[1];
      return a[0]<b[0];
  }  
};

int main() {
    ll n; cin>>n;
    vector <vector <ll>> a(n, vector <ll>(3));
    
    for(ll i=0; i<n; i++){
        ll fust; cin>>fust;
        ll secon; cin>>secon;
        
        a[i] = {fust, secon, i};
    }
    
    sort(a.begin(), a.end(), Cmp());
    vector <ll> smol(n, 0);
    ll maxprev = LLONG_MIN;
    for(ll i=0; i<n; i++){
        if (a[i][1]<=maxprev) smol[a[i][2]] = 1;
        maxprev = max(maxprev, a[i][1]);
    }
    
    vector <ll> big(n, 0);
    ll minprev = LLONG_MAX;
    for( ll i=n-1; i>=0; i--){
        if (a[i][1] >= minprev) big[a[i][2]] = 1;
        minprev = min(minprev, a[i][1]);
    }
    
    for(auto &i: big) cout<<i<<" ";
    cout<<endl;
    for(auto &i: smol) cout<<i<<" ";
    return 0;
    
}
