#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int ch=0,num1,num2;
	cout<<"\n\tCALCULATOR";
	while(ch!=5){
	 cout<<"\nOPERATION MENU\n1.ADD\n2.SUBTRACT\n3.PRODUCT\n4.DIVIDE\n5.END\nENTER YOUR CHOICE:\t";
	 cin>>ch;
	 switch(ch){
		case 1: cout<<"\nEnter two numbers : ";
				cin>>num1>>num2;
				cout<<"RESULT IS "<<num1+num2;
				break;
		case 2: cout<<"\nEnter two numbers : ";
				cin>>num1>>num2;
				cout<<"RESULT IS "<<num1-num2;
				break;
		case 3: cout<<"\nEnter two numbers : ";
				cin>>num1>>num2;
				cout<<"RESULT IS "<<num1*num2;
				break;
		case 4: cout<<"\nEnter two numbers : ";
				cin>>num1>>num2;
				cout<<"RESULT IS "<<num1/num2;
				break;
		case 5: exit(0);
		default: cout<<"\nINVALID CHOICE !!";
		}
	}
}
