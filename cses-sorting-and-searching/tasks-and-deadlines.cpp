#include <bits/stdc++.h>
using namespace std;
 
using ll = long long int;
using pll = pair <ll, ll>;

struct Cmp{
  bool operator()(pll &a, pll &b){
      if (a.first == b.first) return a.second<b.second;
      return a.first>b.first;
  }  
};

int main() {
    ll n; cin>>n;
   vector <pll> vec(n);
   priority_queue <pll, vector <pll>, Cmp> pq;
   for(ll i=0; i<n; i++){
       ll a; cin>>a;
       ll d; cin>>d;
       vec[i] = {a, d};
       pq.push({a, d});
   }
   ll curr = 0;
   ll cost = 0;
   while(!pq.empty()){
       curr += pq.top().first;
       cost += (pq.top().second - curr);
       pq.pop();
   }
   cout<<cost;
   return 0;
}
