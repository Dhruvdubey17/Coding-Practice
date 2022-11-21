#include<iostream>
using namespace std;

class Car {
private:
	float price;

public:
	char name[20];
	int model;

	void set_price(float p) {
		float msp = 111.11;
		if(p>0) {
			price = p;
		}
		else
		price = msp;
	}

	float get_price() {
		return price;
	}

};

int main() {
	Car c;
	cout<<"Enter name of car : ";
	cin>>c.name;
	c.model = 112;
	cout<<"Name : "<<c.name<<endl;
	cout<<"Model Number : "<<c.model<<endl; 
	c.set_price(100); 
	cout<<"Price of car = "<<c.get_price()<<endl;
}