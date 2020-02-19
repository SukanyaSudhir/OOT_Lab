#include<iostream>
#include<time.h>
using namespace std;
class timing{
	clock_t on,off;
	public: 
		timing(){ on=0; off=0; }
		void start();
		void stop();
		void show();
	};
void timing :: start(){
	on=clock();
	}
void timing :: stop() { 
	if(on==0){ off=0; }
	else{
	off=clock(); }
}
void timing :: show(){ 
	cout<<"\nTime is "<< (off-on)/CLOCKS_PER_SEC<<" sec"; }
int main(){
	timing c ;
	int ch;
	while(1){
		cout<<"\nSTOPWATCH\n1.Start\n2.Stop\n3.Time elapsed\n4.Exit\nEnter your choice: ";
		cin>>ch;
		switch(ch){
			case 1: c.start();
					break;
			case 2: c.stop();
					break;
			case 3: c.show();
					break;
			case 4: exit(0);
			default: cout<<"\nInvalid choice";
		}
	}
}
