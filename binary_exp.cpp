#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

ll re_exp(ll a,ll b){
    if(b==0) return 1;
    ll pd=re_exp(a,b/2);
    if(b&1){
        // return a*re_exp(a,b/2)*re_exp(a,b/2);
        return a*pd*pd;
    }
    else{
        // return re_exp(a,b/2)*re_exp(a,b/2);
        return pd*pd;
    }
}

ll iter_exp(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1) ans*=a;//if last bit is 1 ,then multiply..
        b>>=1;
        a*=a;
    }
    return ans;
}

void solve(){
        ll a,b;cin >> a >> b;
        cout << re_exp(a,b) << endl;
        cout << iter_exp(a,b) << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}