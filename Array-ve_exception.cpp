//input 10 num, -ve num exception
#include<iostream>
using namespace std;
int main(){
	int ar[10],i,temp=0;
	cout<<"Enter 10 numbers\n";
	for(i=1;i<=10;i++){ cin>>ar[i]; }
	try{
		for(i=1;i<=10;i++){ 
			temp= ar[i];
			if(temp<0){ cout<<"\nNum= "<<temp; throw temp; }
			}
		}
	catch(int x){ cout<<"\tException: negative number caught" ; }
	return 0;
	}
		
