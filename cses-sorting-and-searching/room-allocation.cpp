#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

bool cmp(vector <ll> &a, vector <ll> &b){
    if (a[0] == b[0]) return a[1]>b[1];
    return a[0] <b[0];
}

int main() {
    ll n; cin>>n;
    vector <vector <ll>> vec;
    for(int i=0; i<n; i++){
        ll a; cin>>a;
        vec.push_back({a, 1, i});
        ll b; cin>>b;
        vec.push_back({b, -1, i});
    }
    
    sort(vec.begin(), vec.end(), cmp);
    vector <ll>res(n);
    priority_queue <int> pq;
    ll curr = 0;
    ll ans = 0;
    for(auto it: vec){
        if (it[1] == -1){
            curr--;
            pq.push(res[it[2]]);
        }else{
            if (pq.empty()){
                curr++;
                res[it[2]] = curr;
            }else {
                int room = pq.top();
                pq.pop();
                res[it[2]] = room;
                curr++;
            }
        }
        
        ans = max(ans, curr);
    }
    
    cout<<ans<<endl;
    for(auto it: res) cout<<it<<" ";
    return 0;
}
