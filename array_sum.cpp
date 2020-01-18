#include<iostream>
using namespace std;
int main(){
	int ar[30],n,i,sum=0;
	cout<<"\nEnter the no.of elements:\t";
	cin>>n;
	cout<<"\nEnter the array elements";
	for(i=0;i<n;i++){
		cin>>ar[i];
		}
	for(i=0;i<n;i++){
		sum=sum+ar[i];
		}
	cout<<"\nSum of "<<n<<" elements is "<<sum;
	return 0;
	}
