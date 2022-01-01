#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
#define int long long
string name;
mt19937_64 rnd(time(0));
int rdbt(int l,int r){
    return (rnd()%((r)-(l)+1)+(l));
}
#define rand rdbt
ofstream yml;
void fast(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
string str(int x){
	stringstream ss;
	ss<<x;
	string p;
	ss>>p;
	return p;
}
const int tl=1000,ml=131072;
void point(int num,int N,int score,int subid){
    yml<<name<<num<<".in:"<<endl;
    yml<<" timeLimit: "<<tl<<endl;
    yml<<" memoryLimit: "<<ml<<endl;
    yml<<" score: "<<score<<endl;
    yml<<" subtaskId: "<<subid<<endl<<endl;
	cout<<num;
	ofstream of(name+"\\"+name+str(num)+".in");
    of<<rand(-N,N)<<" "<<rand(-N,N)<<endl;
	of.close();
	system((".\\"+name+" < "+name+"\\"+name+str(num)+".in > "+name+"\\"+name+str(num)+".out").c_str());
	Sleep(100);
	system("cls");
}
bool subtask;
int total;
int cnt=0;
void gen(int l,int r,int N){
    cnt++;
	for(int i=l;i<=r;i++) point(i,N,((subtask)?(100/total*(r-l+1)):(100/total)),((subtask)?(cnt):(0)));
}
void init(){
    system(("rd "+name).c_str());
    system(("md "+name).c_str());
	yml.open((name+"\\config.yml"));
}
signed main(){
    name="ab";
	total=5;
    subtask=0;
    init();
    gen(1,5,1000000000);
	return 0;
}
