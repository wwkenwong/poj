#include <iostream>
#include<stdio.h>  
#include<string.h>  
int n,m,w,C;

using namespace std;
const int maxmm=10000;
const int maxn=10000;
int dis[maxn];
struct node{
    int a,b;
    int cost;
}p[maxn];
bool Bellman_Ford()  
{  
    memset(dis, 0x3f, sizeof(dis));  
    dis[1] = 0;  
    for(int i = 1; i <= n - 1; i++)  
    {  
        bool flag = false;  
        for(int j = 0; j < C; j++)  
        {  
            int a = p[j].a, b = p[j].b;  
            int c = p[j].cost;  
            if(dis[b] >dis[a]+c)  
            {  
                 dis[b] =dis[a]+c;  
                 flag = true;  
            }  
  
        }  
        if(!flag)  //any update??
            return 0;  
    }  
    for(int j = 0; j< C; j++)  {
    	int a = p[j].a, b = p[j].b;  
        int c = p[j].cost; 
        if(dis[b] >dis[a]+c)    //+ve loop
            return true;  
    	
    }
    	
    return false;  
}  
  
int main() {
	std::ios::sync_with_stdio(false);
    int s,e,t;
    int F;
    cin>>F;
    while(F--){
    	memset(p, 0, sizeof(p));  
	    cin>>n>>m>>w;
	    C=0;
	    for(int i=0;i<m;i++){
	        cin>>s>>e>>t;
	        p[C].a=s;
	        p[C].b=e;
	        
	        p[C++].cost=t;
	        p[C].a=e;
	        p[C].b=s;
	        
	        p[C++].cost=t;       
	    }
	    for(int i=0;i<w;i++){
	        cin>>s>>e>>t;
	        p[C].a=s;
	        p[C].b=e;
	        
	        p[C++].cost=-1*t;
	          	    	
	    }
	    if(Bellman_Ford()){
	        cout<<"YES\n";
	    }else{
	        cout<<"NO\n";
	    }
	    	
	    }

        
    
	return 0;
}
