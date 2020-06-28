//input string,space exception
#include<iostream>
#include<ctype.h> 
using namespace std;
int main(){
	char str[20],ch;
	int i=0;
	cout<<"\nEnter a string: ";
	gets(str);
	try{ 
		ch=str[0];
		while(ch!='\0'){
			if(isspace(ch)){ throw ch; }
			cout<<ch; 
			i++;
			ch=str[i]; }
	   }
	catch(char c){ cout<<"\nException: whitespace found" ; }
}
