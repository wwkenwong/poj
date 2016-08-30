#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main(){
	char a[100],b[100];
	
	while(gets(a)){
		if(!strcmp(a,"START")){
			memset(b,0,sizeof(b));
		}
		else if(!strcmp(a,"END")){
			printf("%s\n",b);
		}
		else if(!strcmp(a,"ENDOFINPUT")){
			break;
			
		}
		else{
			for(int i=0;a[i]!='\0';i++){
				if(a[i]>='A'&&a[i]<='Z'){
					if(a[i]+21>90){
						b[i]=a[i]-5;
					}
					else{
						b[i]=a[i]+21;
					}
				}
				else{
					b[i]=a[i];
				}
			}
		}
	}
	
}
