#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int A[10001];
int B[10001];
int main(){

	int N,L,P;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>A[i]>>B[i];
	}
	cin>>L>>P;
	A[N]=L;
	B[N]=0;
	N++;
	priority_queue<int> que;
	int ans=0,pos=0,tank=P;
	for(int i=0;i<N;i++){
		int d=A[i]-pos;
		while(tank-d<0){
			if(que.empty()){
				puts("-1");
				return 0;
			}
			tank+=que.top();
			que.pop();
			ans++;
		}
		tank-=d;
		pos=A[i];
		que.push(B[i]);
	}
	printf("%d\n",ans);
	return 0;
}
