//factorial using for loop
#include<iostream>
using namespace std;
int main(){
	int i,fact, n;
	cout<<"enter value of n"<<endl;
	cin>>n;
	for(i=1; i<=n; i++){
		fact=fact*i;
	}
	cout<<"factorial = "<<fact<<endl;
	return 0;
}
