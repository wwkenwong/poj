#include<iostream>
#include<algorithm>
#include<cstring>
#include<stdlib.h>
#include<cmath>
using namespace std;
const int maxn=2100;
double x[maxn];
double y[maxn];
struct node{
	double left;
	double right;
};
node map[maxn];
int cmp(node a, node b)  
{  
    return a.left < b.left;  
}  

int main(){
	std::ios::sync_with_stdio(false);
	int n;
	int pair=0;
	double d;
	int num;
	while(cin>>n>>d&&n!=0&&d!=0){
		num=0;
		pair++;
		bool flag=0;
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		memset(map,0,sizeof(map));
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
			if(y[i]>d||d<0){flag=1;}
		}
		if(flag){
			cout<<"Case "<<pair<<": -1\n";
		}
		else{
			double z=0;
			for(int i=0;i<n;i++){
				z=sqrt((d*d)-(y[i]*y[i]));
				map[i].left=(double)x[i]-z;
				map[i].right=(double)x[i]+z;
			}
			sort(map,map+n,cmp);
			
			double p=-100000000;
			for(int i=0;i<n;i++){
				if(map[i].right<=p){
				
					p=map[i].right;
				}
				else{
					if(map[i].left>p){
						num++;
						p=map[i].right;
					}
				}
			}
			cout<<"Case "<<pair<<": "<<num<<"\n";
		}
		
	}
	return 0;
}
