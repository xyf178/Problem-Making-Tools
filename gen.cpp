/*
作者：x_y_f
请 I.P.G.A. 的成员尽量使用这个生成数据，便于大家调试，谢谢
*/
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
void point(int num,int N/*在参数里面写数据限制*/,int score,int subid){
    yml<<name<<num<<".in:"<<endl;
    yml<<" timeLimit: "<<tl<<endl;
    yml<<" memoryLimit: "<<ml<<endl;
    yml<<" score: "<<score<<endl;
    yml<<" subtaskId: "<<subid<<endl<<endl;
	cout<<num;
	ofstream of(name+"\\"+name+str(num)+".in");
    //这里是你生成数据的算法
	of.close();
	system((".\\"+name+" < "+name+"\\"+name+str(num)+".in > "+name+"\\"+name+str(num)+".out").c_str());//运行 std，如果是 Special Judge 的话，就改一下，只输出需要的结果
	Sleep(100);
	system("cls");
}
bool subtask;
int total;
int cnt=0;
void gen(int l,int r,int N/*在参数里面写数据限制*/){//使用方法：gen(数据点的开始，数据点的结束，n的限制，...)
    cnt++;
	for(int i=l;i<=r;i++) point(i,N/*在参数里面写数据限制*/,((subtask)?(100/total*(r-l+1)):(100/total)),((subtask)?(cnt):(0)));
}
void init(){
    system(("rd "+name).c_str());
    system(("md "+name).c_str());
	yml.open((name+"\\config.yml"));
}
signed main(){
    name="match";//这里是你的题目名字，std 名称也是这个，注意在同一个文件夹下
	total=10;//这里是数据点总数
    subtask=1;//这里是是否使用子任务，1是，0不是
    // tl=1000; //这里是时间限制，默认1000ms
    // ml=131072; //这里是内存限制，默认128MiB
    // 只需要用 gen 生成就可以了，其它的不要动，否则可能出锅
    init();
    /*生成你的数据*/
	return 0;
}
