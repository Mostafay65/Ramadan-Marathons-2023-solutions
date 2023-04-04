#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define OO 2'000'000'000
#define ull unsigned long long
#define nl '\n'
#define sz(x) (ll)(x.size())
#define all(x) x.begin(),x.end()
#define rall(s)  s.rbegin(), s.rend()
#define getline(s) getline(cin>>ws,s)
#define ceill(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define pi  3.141592653589793
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define multi_ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

 
void Fast_IO(){
ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// freopen("filename.in", "r", stdin);
// freopen("filename.txt", "w", stdout);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
#endif
}




int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };



int n,a,b;
int c[41],m[41],cost[41];

bool check(int cy,int me,int x,int y){
    if(cy==0 && me==0) return false;
    return cy*y==me*x;
}

int dp[41][405][405];

int min_cost(int idx,int cy,int me){
    if(idx == n){
        if(check(cy,me,a,b)){
            return 0;
        }
        return 5000;
    }

    int &ret = dp[idx][cy][me];
    if(ret != -1) return ret;
    ret = 5000;
    ret = min(ret,min_cost(idx+1,cy+c[idx],me+m[idx])+cost[idx]);
    ret = min(ret,min_cost(idx+1,cy,me));
    return ret;
}


void solve(){
  cin>>n>>a>>b;
    for(int i=0;i<n;i++){
        cin>>c[i]>>m[i]>>cost[i];
    }
    memset(dp,-1,sizeof (dp));
    int ans = min_cost(0,0,0);
    if(ans >= 5000) cout<<-1<<nl;
    else cout<<ans<<nl;



}
 
int main(){
    Fast_IO();
int t =1; 
//cin>>t;
while(t--){
solve();
}
return 0;
}  