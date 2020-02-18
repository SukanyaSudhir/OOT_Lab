#include<iostream>
#include<stdlib.h>
using namespace std;
class account{
	int num;
	char name[20];
	int amount;	
	public:
		account() : num(0){}
		void create(){
			cout<<"\nAccount no.: ";
			cin>>num;
			cout<<"\nEnter name: ";
			cin>>name;
			cout<<"\nPrincipal Amount: ";
			cin>>amount;
			}
		void deposit(){ 
			int amt=0;
			if(num==0){
				cout<<"\nCreate an account!!\nAccount doesn't exist";
				exit(0);  }
			cout<<"\nEnter deposit amount: ";
			cin>>amt;
			amount=amount+amt;
		}
		void withdrawal(){
			if(num==0){
				cout<<"\nCreate an account!!"; 
				exit(0);}
			int amt=0;
			cout<<"\nEnter withdrawal amount: ";
			cin>>amt;
			if(amt>amount){ cout<<"\nYou dont have that much balance in your account!!!\nCurrent balance is "<<amount; }
			else{
			amount=amount-amt; }
			if(amount<0){ amount=0; }
		}
		void balance(){
			cout<<"\nAccount no.: "<<num;
			if(num==0){
				cout<<"\nAccount doesn't exist!!"; 
				exit(0);}
			else{
			cout<<"\nName: "<<name;		
			cout<<"\nBalance: "<<amount;
			}
		}
};
int main(){
	account a;
	int ch;
	while(ch!=5){
		cout<<"\n1.Create\n2.Deposit\n3.Withdrawal\n4.Balance\n5.Exit\nEnter your choice: ";
		cin>>ch;
		switch(ch){
			case 1: a.create();
				break;
			case 2: a.deposit();
				break;
			case 3: a.withdrawal();
				break;
			case 4: a.balance();
				break;
			case 5: exit(0);
			default: cout<<"INVALID CHOICE!!!";
}
}
}

