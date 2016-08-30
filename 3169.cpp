#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;
const int maxn=30000;
const int inf=1e9+10;

int N,ML,MD;
int AL[maxn],BL[maxn],DL[maxn];
int AD[maxn],BD[maxn],DD[maxn];

int d[maxn];

void bellman_ford(){
	//memset(d,inf,sizeof(d));
	fill(d, d+N, inf);
	d[0]=0;
	for(int k=0;k<N;k++){
		for(int i=0;i+1<N;i++){
			if(d[i+1]<inf){
				d[i]=min(d[i],d[i+1]);
			}
		}
		for(int i=0;i<ML;i++){
			if(d[AL[i]-1]<inf){
				d[BL[i]-1]=min(d[BL[i]-1],d[AL[i]-1]+DL[i]);
			}
		}
		for(int i=0;i<MD;i++){
			if(d[BD[i]-1]<inf){
				d[AD[i]-1]=min(d[AD[i]-1],d[BD[i]-1]-DD[i]);
			}
		}
		
	}
	int res=d[N-1];
	if(d[0]<0){
		res=-1;
	}
	else{
		if(res==inf){
			res=-2;
		}
	}
	cout<<res;
	
}
int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>N>>ML>>MD;
	for(int i=0;i<ML;i++){
		cin>>AL[i]>>BL[i]>>DL[i];
	}	
	for(int i=0;i<MD;i++){
		cin>>AD[i]>>BD[i]>>DD[i];
	}
	bellman_ford();
	return 0;
}
