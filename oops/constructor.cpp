#include<iostream>
using namespace std;

class Car {
	private:
		float price;

	public:
		char name[20];
		int model_no;
	//Constructor
	Car() {
		cout<<"Inside car constructor"<<endl;
	}
	//Parameterised constructor
	Car(float p,int m,char *n) {
		price = p;
		model_no = m;
		strcpy(name,n);
	}

	void print() {
		cout<<"Name "<<name<<endl;
		cout<<"Model_no "<<model_no<<endl;
		cout<<"Price "<<price<<endl;
	}

};

int main() {

	Car c;
	Car d(222,333,"Audi");

	d.print();
	
	return 0;
}