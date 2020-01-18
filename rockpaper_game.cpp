#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	int p1=0,p2=0,c1=0,c2=0,k;
	//cout<<"\nNo.of players ?";
	//cin>>ch;
	while((p1!=4)&&(p2!=4)){
		cout<<"\t\t\t\nROCK....PAPER....SCISSOR\n 1.rock\n2.paper\n3.scissor\n4.exit\n";
		cout<<"Enter your choice\n player 1... "  ; 
			cin>>p1;
			//Beep(1000,800);
			//Sleep(10);
		cout<<"\t\t\t\nplayer 2... ";
		cin>>p2; 
		k=1000;
		while(k>=500){
		//Beep(k,30);//Beep(frequency,delay in ms)
		k-=100; }
		if(p1==p2){
			c1+=0;
			c2+=0;
			}
		else if((p1==1)&&(p2==2)){
			c2=c2+1; }
		else if ((p1==2)&&(p2==1)){
			c1=c1+1; }		
		else if((p1==1)&&(p2==3)){
			c1=c1+1; }
		else if((p1==3)&&(p2==1)){
			c2=c2+1; }
		else if((p1==2)&&(p2==3)){
			c2=c2+1; }
		else if((p1==3)&&(p2==2)){
			c1=c1+1; }
		else{ cout<<"\nINVALID CHOICE!!!"; }
	}
	cout<<"\nGame over\nResult\np1=: "<<c1<<"  p2= "<<c2;
	if(c1>c2){
		cout<<"player 1 won";
		}
	else if(c1==c2){
		cout<<"same score";
	}
	else{
		cout<<"player 2 won";
		}
	return 0 ;
}
