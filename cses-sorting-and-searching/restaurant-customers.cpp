#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main() {
    ll n; cin>>n;
    priority_queue <pair <ll, int>, vector <pair <ll, int>>, greater<pair <ll, int>>> pq;
    while(n--){
        ll a; cin>>a;
        ll b; cin>>b;
        pq.push({a, 1});
        pq.push({b, -1});
    }
    ll ans = 0;
    ll curr = 0;
    while(!pq.empty()){
        curr += pq.top().second;
        ans = max(ans, curr);
        pq.pop();
    }
    cout<<ans;
    return 0;
}
