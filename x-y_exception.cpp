//Do x-y, exception if x<y 
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"\nEnter two integers: ";
	cin>>x>>y;
	try{
		if(x<y){ throw x ; }
		else{ cout<<"\n"<<x<<"-"<<y<<"="<<x-y; }
		}
	catch(int x){ cout<<"\nOperation denied,Exception caught"; }
	return 0;
	}
