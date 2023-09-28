//if else program to check wether an integer is lesser than greater than or equal to other
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"please enter the numbers\n";
	cin>>a>>b;
	if (a>b){
		cout<<a<<" is greater than "<<b<<"\n";
		
	}
	else if(a<b){
		cout<<a<<" is less than "<<b<<endl;
		
	}
	else
		cout<<a<<" is equal to "<<b<<endl;
	
	return 0;
}
