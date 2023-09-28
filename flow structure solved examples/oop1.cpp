#include<bits/stdc++.h>
using namespace std;
class car
{
	public:
		string name;
		int model;
		long int price;
		string colour;
		int mileage;
	int drive(int distance){
		mileage= mileage+distance;
	}	
	void showdata(){
		cout<<"name "<<name<<endl;
		cout<<"model "<<model<<endl;
		cout<<"price = RS"<<price<<endl;
		cout<<"colour "<<colour<<endl;
		
	}
	
};
int main(){
	car C1;
	C1.name ="jimny white";
	C1.model= 2006;
	C1.drive(70);
	C1.price = 20000000;
	C1.colour = "white";
	C1.showdata();
	return 0;
}
