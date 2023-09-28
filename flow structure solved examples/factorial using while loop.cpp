//factorial using while loop
#include<iostream>
using namespace std;
int main(){
	int i=1, n, fact=1;
	cout<<"enter the value of n\n";
	cin>>n;
	while(i<=n){
		fact= fact*i;
	}
	cout<<fact<<endl;
	
	return 0;
}
