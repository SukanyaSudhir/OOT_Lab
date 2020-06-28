//matrix using base-class pointer
#include<iostream>
using namespace std;
class Matrix{
	protected:
		int mat[3][3];
	public:
		void input(){
			int i,j;
			cout<<"\nEnter elements of 3x3 matrix\n";
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){ cin>> mat[i][j]; } }
		}
		void show(){ 
			cout<<"Show function inside Base class\n";
			int i,j;
			cout<<"The matrix is";
			for(i=0;i<3;i++){ cout<<"\n";
				for(j=0;j<3;j++){ cout<<"\t";
				cout<< mat[i][j]; } }
				} 
};
class MatrixA: public Matrix{
	public:
		void show(){
			cout<<"\nShow function inside Derived class\n";
			int i,j;
			cout<<"The matrix is\n";
			for(i=0;i<3;i++){ cout<<"\n";
				for(j=0;j<3;j++){ cout<<"\t";
				cout<< mat[i][j]; } }
				}
};
int main(){
	MatrixA deri; //derieved class object
	Matrix base; //base class object
	Matrix* mptr; //pointer of base class
	cout<<"Derived class object assigned\n";
	mptr= &deri;
	mptr->input();
	mptr->show();
	cout<<"\n\nBase class object assigned\n";
	mptr= &base;
	mptr->input();
	mptr->show();
	return 0;
	}
			
