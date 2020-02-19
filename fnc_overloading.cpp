#include<iostream>
using namespace std;
float vol(float r1){ return ((4*3.14*r1*r1*r1)/3); }//sphere
int vol(int a){ return (a*a*a); }//cube
float vol(float l,float b,float h){ return (l*b*h); }//cuboid
float vol(float r, float h){ return (3.14*r*r*h); }//cylinder
int main(){
	float r,rad,h,x,y,z;
	int a;
	cout<<"Enter radius of sphere: ";
	cin>>r;
	cout<<"Enter radius and height of cylinder: ";
	cin>>rad>>h;
	cout<<"Enter the length of side of a cube: ";
	cin>>a;
	cout<<"Enter the dimensions of cuboid: ";
	cin>>x>>y>>z;
	cout<<"\nVolume of SPHERE = "<< vol(r);
	cout<<"\nVolume of CYLINDER = "<<vol(rad,h);
	cout<<"\nVolume of CUBE = "<<vol(a);
	cout<<"\nVolume of CUBOID = "<<vol(x,y,z)<<endl;
return 0;
}	
