#include <iostream>
using namespace std;
class list{
	char name[20];
	float price;
	int quantity;
	
public:
	float mrp;
	float total;
	void enter();
	void print();
	void modify();
};
float sum=0;
void list::enter(){
	cout<<"\nEnter the name of commodity: ";
	cin>>name;
	cout<<"Enter the price of each commodity: ";
	cin>>price;
	cout<<"Enter the quantity of commodity: ";
	cin>>quantity;
	mrp=quantity*price;
}
void list::print(){
	mrp=quantity*price;	
	cout<<name<<"\t"<<price<<"\t"<<quantity<<"\t\t"<<mrp;
}
void list:: modify(){
	int num,c;
	cout<<"\n1.Increase\t2.Decrease\nChoice: ";
	cin>>c;
	if(c==2){
	cout<<"Enter the quantity to be decreased: ";
	cin>>num;
	quantity=quantity-num;}
	else if(c==1){
		cout<<"Enter the quantity to be increased: ";
	cin>>num;
	quantity=quantity+num;}
	else{ cout<<"\nInvalid choice\n"; }
		
	if(quantity<0){ quantity=0; }
	total=quantity*price; 
}	
list l[30];
int main(){
	int ch,n,i,d=0;
	cout<<"\nEnter the no.of items: ";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"\nEnter the item no."<<i;
		l[i].enter(); }
	while(d!=2){
	cout<<"\t\tBILL\nSL.NO\tNAME\tPRICE\tQuantity\tMRP\n";
	for(i=1;i<=n;i++){
		cout<< i<<"\t";
		l[i].print();
		cout<<"\n"; }
	cout<<"Do you want to modify ?\n Yes-1  No-2 ";
	cin>>d;
	if(d==1){
		cout<<"\nEnter the sl.no of commodity: ";
		cin>>ch;
		l[ch].modify();
		}
	else{ break; }
	}
	cout<<"\t\tBILL\nSL.NO\tNAME\tPRICE\tQuantity\tMRP\n";
	sum=0;
	for(i=1;i<=n;i++){
		cout<< i<<"\t";
		l[i].print();
		sum+=l[i].mrp; 
		cout<<"\n"; }
	
	cout<<"\t\t\t\tTOTAL: "<< sum;
return 0;
}

	
