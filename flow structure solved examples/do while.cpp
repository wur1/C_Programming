//factorial using do while loop
#include<iostream>
using namespace std;
int main(){
	int i=1, n, fact=1;
	cout<<"enter the value of n\n";
	cin>>n;
	do{
		fact= fact*i;
		i++;
	}
	while(i<=n);
	cout<<fact<<endl;
	return 0;
}
