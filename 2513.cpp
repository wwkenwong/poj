#include<iostream>  
using namespace std;    
const int large=500000;
class Trietree_node{
	public:
		bool flag;
		int id;
		Trietree_node* next[27];
		Trietree_node(){
			flag=false;
			id=0;
			memset(next,NULL,sizeof(next));
		}
}root;
int color=0;
int degree[large+1]={0};
int ancestor[large+1];

int find(int x){
	if(ancestor[x]!=x){
		ancestor[x]=find(ancestor[x]);
	}
	return ancestor[x];
}
void union_set(int a,int b){
	int pa=find(a);
	int pb=find(b);
	ancestor[pb]=pa;
	return;
}
int hash(char *s){
	Trietree_node*p=&root;
	int len=0;
	while(s[len]!='\0'){
		int index=s[len++]-'a';
		if(!p->next[index]){
			p->next[index]=new Trietree_node;
		}
		p=p->next[index];
		
	}
	if(p->flag){
		return p->id;
	}
	else{
		p->flag=true;
		p->id=++color;
		return p->id;
	}
}
int main(){
	for(int i=1;i<=large;i++){
		ancestor[i]=i;
	}
	char a[11],b[11];
	while(cin>>a>>b){
		int i=hash(a);
		int j=hash(b);
		degree[i]++;
		degree[j]++;
		union_set(i,j);
		
	}
	int s=find(1);
	int num=0;
	for(int i=1;i<=color;i++){
		if(degree[i]%2==1){
			num++;
		}
		if(num>2){
			cout<<"Impossible\n";
			return 0;
		}
		if(find(i)!=s){
			cout<<"Impossible\n";
			return 0;
		}
	}
	if(num==1){
		cout<<"Impossible\n";
	}
	else{
		cout<<"Possible\n";
	}
	
	return 0;
	
}








