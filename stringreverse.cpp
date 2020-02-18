#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
char str[20],rev[20],i=0,j=0,len;
	cout<<"Enter the string :  ";
	cin>>str;
	while(str[i]!='\0'){
		i++;
		}
		len=i-1;
		i=i-1;
		for(j=0;j<len,i>=0;j++,i--){
			rev[j]=str[i];
		}
	cout<<"\nReverse is : "<<rev;
}
