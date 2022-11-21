#include<iostream>
using namespace std;

class Car {
	public:
		int price;
		int model_no;
		char name[20];

		void print() {
			cout<<"Name "<<name<<endl;
			cout<<"Model no"<<model_no<<endl;
			cout<<"price "<<price<<endl;
		}

		float get_discount(float x) {
			return price*(1.0-x);
		}
};

int main() {
	Car c;
	cout<<"What is the name of the car?\n";
	cin>>c.name;
	cout<<"Which model you looking for?\n";
	cin>>c.model_no;
	cout<<"The price for your the model you looking for is: ";
	cin>>c.price;
	//cout<<"Name "<<c.name<<endl;
	//cout<<"Model number "<<c.model_no<<endl;
	//cout<<"Price "<<c.price<<endl;
	//or for priting above 3 lines we can use function void print()
	c.print();



	float discount;
	cout<<"Discout I can get you ";
	cin>>discount;
	cout<<"Discounted price "<<c.get_discount(discount/100);
}