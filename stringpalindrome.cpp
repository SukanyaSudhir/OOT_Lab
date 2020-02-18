#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	char str[20];
	int i=0,j=0;
	cout<<"\nEnter a string:\t";
	cin>>str;
	while(str[i]!='\0'){ i++; }
	while(j<i){
		if(str[i-1]!= str[j]){
			cout<<"\nString is not a palindrome";
			exit(0);
			}
		j++;
		i--;
		}
	cout<<"\nString is a palindrome";
	}
