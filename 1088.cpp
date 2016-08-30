#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int n,m;
int map[105][105];
int ans[105][105];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int dp(int x,int y){
	int max=0;
	if(ans[x][y]>0){
		return ans[x][y];
	}
	for(int i=0;i<4;i++){
		int xi=x+dx[i];
		int yi=y+dy[i];
		if(xi>=0&&xi<n&&yi>=0&&yi<m){
			if(map[x][y]>map[xi][yi]){
				int j=dp(xi,yi);
				if(j>max){
					max=j;
				}
		}
	}
	}
	
	return max+1;
	
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			ans[i][j]=dp(i,j);
		}
	}	
	int maxm=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(ans[i][j]>maxm){
				maxm=ans[i][j];
			}
		}
	}
	cout<<maxm;
	return 0;
}
