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
    priority_queue <vector<ll>, vector <vector<ll>>, greater<vector<ll>>> pq;
    vector <pair <ll, ll>> vec;
    while(n--){
        ll a; cin>>a;
        ll b; cin>>b;
        vec.push_back({a, b});
    }
    sort(vec.begin(), vec.end(), Cmp());
    ll count = 0;
    ll prev = -1;
    for(auto it: vec){
        if (it.first>=prev){
            prev = it.second;
            count++;
        }
    }
    
    cout<<count;
    return 0;
}
