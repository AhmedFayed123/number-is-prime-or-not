#include<iostream>
using namespace std;
int main(){
	int n,i,m=0,flag=0;
	cout<<"enter the num : ";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++){
		
		if(n%i==0){
			cout<<"num is not prime "<<endl;
			flag=1;
			break;
			
		}
		
	}
	if(flag==0)
	cout<<"num is prime"<<endl;
	
	return 0;
	
}
