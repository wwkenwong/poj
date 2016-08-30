#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=4;
int map[maxn][maxn];
int dx[]={1,-1,0,0,0};
int dy[]={0,0,1,-1,0};
int ans=33;
int x[50];
int y[50];
int ansx[50];
int ansy[50];

void flip(int s){
	int i=s/4;
	int j=s%4;
	map[0][j]=1-map[0][j];
	map[1][j]=1-map[1][j];
	map[2][j]=1-map[2][j];
	map[3][j]=1-map[3][j];
	map[i][0]=1-map[i][0];
	map[i][1]=1-map[i][1];
	map[i][2]=1-map[i][2];
	map[i][3]=1-map[i][3];
	map[i][j]=1-map[i][j];
	
}
bool complete(){
	int sum=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			sum+=map[i][j];
		}
	}	
	if(sum!=16){
		return 0;
	}
	return 1;
}
void dfs(int s,int b){
	if(complete()){
		if(ans>b){
			ans=b;
			for(int i=1;i<=ans;i++){
				ansx[i]=x[i];
				ansy[i]=y[i];
			}
		}
		return;
	}
	if(s>=16) return;
	dfs(s+1,b);
	flip(s);
	x[b+1]=s/4+1;
	y[b+1]=s%4+1;
	dfs(s+1,b+1);
	flip(s); //backtrack
}
int main(){
	memset(map,0,sizeof(map));
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			char c;
			cin>>c;
			if(c=='-'){
				map[i][j]=1;
			}
		}
	}
	dfs(0,0);
	cout<<ans<<"\n";
	for(int i=1;i<=ans;i++){
		cout<<ansx[i]<<" "<<ansy[i]<<"\n";
	}
	return 0;
}
