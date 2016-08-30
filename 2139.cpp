#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;
const int maxn=320;
const int inf=1e9+10;

int d[maxn][maxn];
int x[maxn];
int V;
void warshall_floyd(){
	for(int k=0;k<V;k++){
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
}
int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	int M;
	cin>>V>>M;
	memset(d,inf,sizeof(d));
	
	for(int i=0;i<V;i++){
		d[i][i]=0;
	}
	while(M--){
		memset(x,0,sizeof(x));
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x[i];
			x[i]--;
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				d[x[i]][x[j]]=d[x[j]][x[i]]=1;
			}
		}
	}
	warshall_floyd();
	int ans=inf;
	for(int i=0;i<V;i++){
		int sum=0;
		for(int j=0;j<V;j++){
			sum+=d[i][j];
		}
		ans=min(sum,ans);
	}
	
	ans=(100*ans)/(V-1);
	cout<<ans;
	return 0;
	
}
