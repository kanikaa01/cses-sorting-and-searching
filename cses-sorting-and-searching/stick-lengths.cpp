#include <bits/stdc++.h>
using namespace std;

#define intt long long

intt to_convert(vector<intt>&p, intt req){
    intt ans = 0;
    for(auto &it: p) ans += abs(req-it);
    return ans;
}

int main() {
    intt n; cin>>n;
    vector <intt> p(n);
    double avg = 0;
    for(auto &i: p) {cin>>i; avg+=i;}
    avg = avg/n*1.0;
    sort(p.begin(), p.end());
    intt alt = to_convert(p, p[n/2]);
    cout<<alt;
    return 0;
}
