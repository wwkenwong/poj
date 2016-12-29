#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <sstream>
#include <deque>
#define ll long long
using namespace std;
const int maxn=100000;
int str[maxn];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	sort(str,str+n);
	cout<<str[n/2];
	return 0;
	
}
