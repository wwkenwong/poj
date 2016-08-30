#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int n;
int array[101][101];
int d_array[101][101];

int d(int i,int j){
	
	if(n>i){
		int temp=d(i+1,j);
	
		int final=d(i+1,j+1);
		if(temp>final){
			final=temp;
	}
		d_array[i][j]=array[i][j]+final;
		return d_array[i][j];
	}

}
int main(){
	memset(d_array,-1,sizeof(d_array));
	cin>>n;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<i+1;j++){
			cin>>array[i][j];
		}
	}
	int out=d(1,1);
	
	cout<<out;
	return 0;
	
}
