#include<iostream>
using namespace std;
class cricket{
char name[20];
float run;
float match;
public: 
float average();
void input();
void output();
};
float cricket :: average(){
	return (run/match); }
void cricket:: input(){
	cout<<"\nenter name: ";
	cin>>name;
	cout<<"\nenter run: ";
	cin>> run;
	cout<<"\n Matches: ";
cin>> match;
}
void cricket :: output(){
cout<<"\nName: "<<name<<"\nMatches: "<<match<<"\tRuns: "<< run;
}
int main(){
cricket c[100];
int n,i;
cout<<"\nNo.of players? ";
cin>>n;
for(i=0;i<n;i++){
c[i].input(); }
for(i=0;i<n;i++){
cout<<"\nCRICKETER "<<i+1;
c[i].output();
cout<<"\nBatting average= "<< c[i].average();
}
return 0; 
}
	
