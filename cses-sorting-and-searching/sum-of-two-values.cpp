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
    ll x; cin>>x;
    vector <ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    
    map <ll, ll> prev;
    ll ind = 1;
    for(auto it: a){
        ll req = x - it;
        if (prev.count(req)){
            cout<<ind<<" "<<prev[req];
            return 0;
        }
        prev[it] = ind;
        ind++;
    }
    
    cout<<"IMPOSSIBLE";
    return 0;
}
