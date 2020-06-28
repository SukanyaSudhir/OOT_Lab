//Matrix multiplication, incorrect order exception
#include<iostream>
using namespace std;
int main(){
	int r1,c1,r2,c2,m1[10][10],m2[10][10],result[10][10],i,j,k;
	cout<<"\nEnter the order of matrix 1: ";
	cin>>r1>>c1;
	cout<<"\nEnter the order of matrix 2: ";
	cin>>r2>>c2;
	try{
		if(c1!=r2){ throw c1; }
		else{
			cout<<"\nEnter elements of matrix 1:\n" ; 
			for(i=0;i<r1;i++){
				for(j=0;j<c1;j++){
					cin>>m1[i][j]; } }
			cout<<"\nEnter elements of matrix 2:\n" ; 
			for(i=0;i<r2;i++){
				for(j=0;j<c2;j++){
					cin>>m2[i][j]; } }
			for(i=0;i<r1;i++){
				for(j=0;j<c2;j++){
					result[i][j]=0;
					for(k=0;k<c1;k++){
						result[i][j] += m1[i][k]*m2[k][j]; } } }
			cout<<"\nProduct of matrices is:\n";
			for(i=0;i<r1;i++){ cout<<"\n";
				for(j=0;j<c2;j++){
					cout<<result[i][j]<<"\t"; } }
		     }
		 }
	catch(int x){ cout<<"\nException: Invalid order of matrices"; }
	return 0;
}
	
