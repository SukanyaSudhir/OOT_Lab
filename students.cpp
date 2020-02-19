#include<iostream>
using namespace std;
class student{
	int roll;
	char name[20];
	char branch[10];
	static int count;
public:
	void inputs();
	void outputs();
	static int showcount(void){
		return count; }
};
int student::count=0;
void student:: inputs(){
	cout<<"\nEnter student name: ";
	cin>> name;
	cout<<"\nEnter roll number: ";
	cin>> roll;
	cout<<"\nEnter branch: ";
	cin>>branch;
	count=++count;
}
void student:: outputs(){
	cout<<"\n"<<name<<"\t "<<roll<<"\t"<<branch;
	}
int main(){
	student l[20];
	int n,i;
	cout<<"Enter no.of students ";
	cin>>n;
	for(i=0;i<n;i++){
		l[i].inputs();
	}
	cout<<"\n\tSTUDENT DETAILS";
	for(i=0;i<n;i++){
		l[i].outputs();
	}
	cout<<"\nTOTAL COUNT: "<<student::showcount();
return 0; 
}

	

