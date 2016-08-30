#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int main(){
	int k;
	cin>>k;
	int counter=0;
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			if(k-i-j==0){
				counter++;
			}
		}
	}
	cout<<counter;
}
