#include <bits/stdc++.h>
#define ll long long
#define OO 1e9
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.ren()
#define TC int t; cin >> t; while(t--)
using namespace std;
void Fero(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

int main(){
    Fero();

    string time;
    cin >> time;
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));
    cout << fixed << setprecision(6);
    double angle = abs(0.5 * (60 * h + m) - 6 * m);
    angle = min(360 - angle, angle);
    cout << angle << endl;

    return 0;
}
