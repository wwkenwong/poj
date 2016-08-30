#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	int s,d;
	while(cin>>s>>d){
		if(s*4-d<0){
			if(s*10-d*2>0){
				cout<<s*10-d*2<<"\n";
			}else{
				cout<<"Deficit\n";
			}
		}
		else if(s*3-d*2<0){
			if(s*8-d*4>0){
				cout<<s*8-d*4<<"\n";
			}else{
				cout<<"Deficit\n";
			}
		}
		else if(s*2-d*3<0){
			if(s*6-d*6>0){
				cout<<s*6-d*6<<"\n";
			}else{
				cout<<"Deficit\n";
			}
		}
		else if(s-d*4<0){
			if(s*3-d*9>0){
				cout<<s*3-d*9<<"\n";
			}else{
				cout<<"Deficit\n";
			}
		}
		else{
			cout<<"Deficit\n";
		}
	}
	return 0;
}
