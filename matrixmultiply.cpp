#include<iostream>
using namespace std;
int main(){
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k; //with pointers *a[10],*b[10],*c[10]
	cout<<"\nDimension of 1st matrix ";
	cin>>r1>>c1;
	cout<<"\nDimension of 2nd matrix ";
	cin>>r2>>c2;
	if(c1!=r2){
		cout<<"\nMULTIPLICATION NOT POSSIBLE !!!!";
		}
	else{
		cout<<"\nEnter the elements of matrix 1:\t";
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				cin>>*(a[i]+j); } }
		cout<<"\nEnter elements of matrix 2:\t";
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				cin>>*(b[i]+j); } }// *(*(b+i)+j)
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){ 
				*(c[i]+j)=0;
				for(k=0;k<c1;k++){
					*(c[i]+j) += *((a[i]+k)) * (*(b[k]+j)); } } }
		cout<<"\nResultant matrix:\n";
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				cout<<*(c[i]+j)<<"\t\n"; } }
		}
	}
/* include headerfile cstdio
 * if using pointers then int *a[10],*b[10],*c[10]
 * mem allocation a[i]=(int*)malloc(col* sizeof(int)), i= 0 to <row where dim of matrix: row x col
 * input elements loops same then cin>> *(c[i]+j) or *(*(a+i)+j) where i->rows,j->column */
				
				
		
				
	
