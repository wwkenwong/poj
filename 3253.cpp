#include <stdio.h>
#include<queue>
#include<iostream>

using namespace std;
priority_queue<int,vector<int>,greater<int> > q;
int main(){
	int n;
	long long ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		q.push(temp);
	}
	while(1){
		int first=q.top();
		q.pop();
		if(q.empty()){
			break;
		}
		int second=q.top();
		q.pop();
		ans+=(long long)first+second;
		q.push(first+second);
	}
	cout<<ans;
	return 0;
}
