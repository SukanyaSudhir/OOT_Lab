#include<iostream>
using namespace std;
class DM;
class DB{
	int ft,inch;
	public:
		void input1(){
			cout<<"\nDistance Feet= ";
			cin>>ft;
			cout<<"Inch= ";
			cin>>inch;
			}
		friend void add( DB,DM); 
	};
class DM{
	int m,cm;
	public:
		void input2(){
			cout<<"\nDistance Metres= ";
			cin>>m;
			cout<<"Centimeters= ";
			cin>>cm;
			}
		friend void add( DB,DM); 
	};
void add(DB db, DM dm){
	float convm,convcm;
	convm=db.ft*0.3048;
	convcm=db.inch*2.54;
	cout<<"\nSUM "<<convm+dm.m<<" metres "<<convcm+dm.cm<<" cm";
	}
int main(){
	DB a;
	DM b;
	a.input1();
	b.input2();
	add(a,b);
	return 0;
}
			
