#include <iostream>
#include<stdio.h>  
#include<string.h>  
int n,m,s,C;
double dis[110],v;
using namespace std;

struct node{
    int a,b;
    double rate,cost;
}p[500];
bool Bellman_Ford()  
{  
    memset(dis, 0, sizeof(dis));  
    dis[s] = v;  
    for(int i = 1; i <= n - 1; i++)  
    {  
        bool flag = false;  
        for(int j = 0; j < C; j++)  
        {  
            int a = p[j].a, b = p[j].b;  
            double r = p[j].rate, c = p[j].cost;  
            if(dis[b] < (dis[a] - c) * r)  
            {  
                 dis[b] = (dis[a] - c) * r;  
                 flag = true;  
            }  
  
        }  
        if(!flag)  
            break;  
    }  
    for(int i = 0; i < C; i++)  
        if(dis[p[i].b] < (dis[p[i].a] - p[i].cost) * p[i].rate)    //+ve loop
            return true;  
    return false;  
}  
  
int main() {
    int a,b;
    double rab,cab,cba,rba;
    cin>>n>>m>>s>>v;
    C=0;
    for(int i=0;i<m;i++){
        cin>>a>>b>>rab>>cab>>rba>>cba;
        p[C].a=a;
        p[C].b=b;
        p[C].rate=rab;
        p[C++].cost=cab;
        p[C].a=b;
        p[C].b=a;
        p[C].rate=rba;
        p[C++].cost=cba;       
    }
    if(Bellman_Ford()){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
        
    
	return 0;
}
