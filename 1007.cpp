#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
using namespace std;
void set_division(string dna_string,int *measure,int number_of_element,int number_of_string){
	int counter=0;
	for(int i=0;i<number_of_element;i++){
		for(int j=i+1;j<number_of_element;j++){
			if(dna_string[i]>dna_string[j]){
				counter++;
			}
		}
	
	}
	*measure=counter;
}
int compare (const void *a,const void *b)
{
	
  	return (*(int*)a-*(int*)b);
}



int main(){
	int number_of_string,number_of_element;
	cin>>number_of_element>>number_of_string;
	string *dna_string=new string [number_of_string];
	int *measure=new int[number_of_string];
	int *order=new int[number_of_string];
	for(int i=0;i<number_of_string;i++){
		cin>>dna_string[i];
	}

	for(int i=0;i<number_of_string;i++){
		set_division(dna_string[i],measure+i,number_of_element,number_of_string);
	}
	
	int *values=new int[number_of_string];
	for(int i=0;i<number_of_string;i++){
		values[i]=measure[i];
	}
	qsort(values,number_of_string,sizeof(int),compare);
	
	
	for(int i=0;i<number_of_string;i++){
		for(int j=0;j<number_of_string;j++){
			if(measure[j]==values[i]){
				cout<<dna_string[j]<<"\n";
				measure[j]=-500;
			}
		}
	}
	
}
