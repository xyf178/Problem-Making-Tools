#include<bits/stdc++.h>
#include<windows.h>
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
vector<string>type={"pdf","tex","cpp","png","jpeg","jpg"};//这个是需要包裹的文件后缀，直接向后加即可
signed main(int argc,char**argv){
    fast();
//	file("");
    system("rd pack");
    system("md pack");
    // system(((string)("cd ")+argv[2]).c_str());
    for(auto x:type){
        system(((string)("copy *.")+x+" pack\\*."+x).c_str());
    }
    return 0;
}
