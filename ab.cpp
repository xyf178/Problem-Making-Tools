#include<bits/stdc++.h>
using namespace std;
#define int long long
void fast(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void file(string name){
    freopen((name+".in").c_str(),"r",stdin);
    freopen((name+".out").c_str(),"w",stdout);
}
signed main(){
    fast();
//	file("");
    int a,b;
    cin>>a>>b;
    cout<<a+b;
    return 0;
}