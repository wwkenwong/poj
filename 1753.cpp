#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=4;
int a[maxn][maxn];
int dx[]={1,-1,0,0,0};
int dy[]={0,0,1,-1,0};
int c=33;
bool complete(){
	int sum=0;
	for (int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			sum+=a[i][j];
		}
	}
	if(sum%16){
		return 0;
	}else{
		return 1;
	}
	
}
bool checker(int i,int j){
	if(i<0||j<0||i>3||j>3){
		return 0;
		
	}
	return 1;
}
void flip(int s){
	int i=s/4;
	int j=s%4;
	for(int k=0;k<5;k++){
		if(checker(i+dx[k],j+dy[k])){
			a[i+dx[k]][j+dy[k]]=1-a[i+dx[k]][j+dy[k]];
		}
	}
}
void dfs(int s,int b){
	if(complete()){
		if(c>b){
			c=b;
			return;
		}
	}
	if(s>=16){
		return;
	}
	dfs(s+1,b);
	flip(s);
	dfs(s+1,b+1);
	flip(s);

}
int main(){
	memset(a,0,sizeof(a));
	//black is 1
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			char c;
			cin>>c;
			if(c=='b'){
				a[i][j]=1;
			}
		}
	}
	dfs(0,0);
	
	if(c==33){
		cout<<"Impossible";
	}
	else{
		cout<<c;
	}
	return 0;
}
