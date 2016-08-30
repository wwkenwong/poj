#include <iostream>
using namespace std;
const int maxn=50010;
int T[maxn],X[maxn],Y[maxn];
int par[maxn];
int rank[maxn];
void init(int n){
	memset(rank,0,sizeof(rank));
	for(int i=0;i<n;i++){
		par[i]=i;
		
	}
	
}
int find(int x){
	if(par[x]==x){
		return x;
	}
	else{
		return par[x]=find(par[x]);
	}
}
void unite(int x,int y){
	x=find(x);
	y=find(y);
	if(x==y){
		return;
	}
	if(rank[x]<rank[y]){
		par[x]=y;
	}else{
		par[y]=x;
		if(rank[x]==rank[y]){
			rank[x]++;
		}
	}
}
bool same(int x,int y){
	return find(x)==find(y);
}
int main(){
	int N,K;
	cin>>N>>K;
	memset(T,0,sizeof(T));
	memset(X,0,sizeof(X));
	memset(Y,0,sizeof(Y));

	for(int i=0;i<K;i++){
		cin>>T[i]>>X[i]>>Y[i];
	}
	init(N*3);
	long ans=0;
	for(int i=0;i<K;i++){
		int t=T[i];
		int x=X[i]-1,y=Y[i]-1;
		if(x<0||N<=x||y<0||N<=y){
			ans++;
			continue;
		}
		if(t==1){
			
			if(same(x,y+N)||same(x,y+2*N)){
				ans++;
			}
			else{
				unite(x,y);
				unite(x+N,y+N);
				unite(x+N*2,y+N*2);
			}
		}
		else{
			if(same(x,y)||same(x,y+2*N)){
				ans++;
			}
			else{
				unite(x,y+N);
				unite(x+N,y+2*N);
				unite(x+N*2,y);
			}
		}
	}
	cout<<ans;
	return 0;
}
