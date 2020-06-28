#include<iostream>
#include<string.h>
using namespace std;
class Vehicle{
	protected:
		char color[15]; 
	public:
		void read(){
			cout<<"Enter a colour: ";
			cin>>color; 
			}
		void print(){
			cout<<"\tColour= "<<color;
		    }
};
class Car: public Vehicle{
	protected:
		char catagory[15];
	public:
		friend void compare( Car *a,Car *b ){
			if(strcmpi((a->catagory),(b->catagory))==0){
				cout<<"\nSame Catagory"; }
			 else{
				 cout<<"\nDifferent catagory"; }
		    }
		void get(){
			cout<<"Catagory of car: "; 
			cin>>catagory;
			 }
		void show(){
			cout<<"\tCatagory= "<<catagory; }
};
int main(){
	Car *aptr,*bptr; 
	Car a,b;
	aptr= &a;
	bptr= &b;
	cout<<"Enter data for Car A :-\n";
	aptr->read();
	aptr->get();
	cout<<"\nEnter data for Car B :-\n";
	bptr->read();
	bptr->get();
	cout<<endl<<"Vehicle a ";
	aptr->print();
	aptr->show();
	cout<<"\nVehicle b ";
	bptr->print();
	bptr->show();
	compare(aptr,bptr);
	
}
