#include<iostream>
#include<cstdio>
using namespace std;
void withoutpara(){
	int i,j;
	cout<<"Enter two numbers: ";
	cin>>i>>j;
	cout<<"Swapped Values of num1="<<j<<"  num2="<<i;
	}
void callbyvalue(int a,int b){
	int temp=0;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nValue within function num1="<<a<<"  num2="<<b;
	}
void callbyref(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nValue within function num1="<<a<<"  num2="<<b;
	}

int main(){
	int num1=5,num2=10,ch=0,temp=0;
	while(ch!=5){
			cout<<"\n\n\tSWAP FUNCTIONS\n1.In function without parameters\n2.Call by value\n3.Call by referance\n4.With default values\n5.Exit\nEnter your choice:\t";
			cin>>ch;
			switch(ch){
				case 1: cout<<"\nIn function without parameters\n";
						withoutpara();
						break;
				case 2: cout<<"\nCall by value method\n";
						cout<<"Enter two numbers: ";
						cin>>num1>>num2;
						cout<<"\nvalue before swap function num1="<< num1<<"  num2="<<num2;
						callbyvalue(num1,num2);
						cout<<"\nValue after swap function\tnum1="<<num1<<"  num2="<<num2;
						break;
				case 3: cout<<"\nCall by referance method\n";
						cout<<"Enter two numbers: ";
						cin>>num1>>num2;
						cout<<"\nvalue before swap function num1="<< num1<<"  num2="<<num2;
						callbyref(num1,num2);
						cout<<"\nValue after swap function\tnum1="<<num1<<"  num2="<<num2;
						break;
				case 4: cout<<"Swapping with default values\nvalue before swap function  num1="<<num1<<"  num2="<<num2;
						temp=num1;
						num1=num2;
						num2=temp;
						cout<<"\nAfter swapping\tnum1="<<num1<<"  num2="<< num2;
						break;
				case 5:exit(0);
				default:cout<<"\nINVALID CHOICE!!";
				}
			}
		}
