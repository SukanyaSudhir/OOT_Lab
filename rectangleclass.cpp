#include<iostream>
using namespace std;
class rectangle{
	float length;
	    float width;
	public:		
		void setlength(float);
		void setwidth(float);
		float perimeter();
		float area();
		void show();
		int samearea(rectangle);
		};
void rectangle :: setlength(float l){ length=l; }
void rectangle :: setwidth(float w){ width=w; }
float rectangle :: perimeter(){ 
		float p;
		p=2*(length+width);
		return p; }
float rectangle:: area(){
		float a;
		a=length * width;
		return a; }
void rectangle :: show(){
		cout<<"\nLength: "<<length<<"\tWidth: "<<width; }
int rectangle :: samearea(rectangle r){
	float a1=0,a2=0;
	a1= area();
	a2= r.area();
	if(a1==a2){ return 1; }
	else { return 0; }
	}
int main(){
	rectangle r1,r2;
	int ch,val;
	float area,peri;
	r1.setlength(5);
				r1.setwidth(2.5);
				r2.setlength(5);
				r2.setwidth(18.9);
	do{
	cout<<"\n1.Case1\n2.Case2\n3.Exit\nEnter your choice:\t";
	cin>>ch;
	switch(ch){
		case 1: cout<<"\nRECTANGLE 1";
						r1.show();
						area=r1.area();
						peri=r1.perimeter();
						cout<<"\nArea= "<<area<<"\tPerimeter= "<<peri;
						cout<<"\nRECTANGLE 2";
						r2.show();
						area=r2.area();
						peri=r2.perimeter();						
						cout<<"\nArea= "<<area<<"\tPerimeter= "<<peri<<endl;
						
						val=r1.samearea(r2);
						(val==0)? cout<<"\nAREA is DIFFERENT" : cout<<"\nSAME AREA"<<endl;
						break;
		case 2: r1.setlength(15);
				r1.setwidth(6.3);
				r1.show();
						cout<<"\nRectangle 1";
						area=r1.area();
						peri=r1.perimeter();
						cout<<"\nArea= "<<area<<"\tPerimeter= "<<peri<<endl;
						cout<<"\nRectangle 2";
						r2.show();
						area=r2.area();
						peri=r2.perimeter();						
						cout<<"\nArea= "<<area<<"\tPerimeter= "<<peri;
						val=r1.samearea(r2);
						(val==0)? cout<<"\nAREA is DIFFERENT" : cout<<"\nSAME AREA";
						break;
			case 3: break;
			default: cout<<"INVALID CHOICE";
			}
			}while(ch!=3);
		return 0;
		}
				
						

		
