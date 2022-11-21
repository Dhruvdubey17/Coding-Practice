#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class Car {
private:
	float price;

public:
	char *name;
	int model_no;

	Car() {
		name = NULL;
	}
	//creating a copy constructor to make a shallow copy into deep copy
	Car(Car &x) {
		price = x.price;
		model_no = x.model_no;
		name = new char[strlen(x.name)+1];
		strcpy(name,x.name);
	}

	Car(float p,int m,char *n) {
		price = p;
		model_no = m;
		name = new char[strlen(n)+1];
		strcpy(name,n);
	}

	void setPrice(float p) {
		price = p;
	}

	void print() {
		cout<<"Name: "<<name<<endl;
		cout<<"Model number: "<<model_no<<endl;
		cout<<"Price: "<<price<<endl;
	}
	//to destruct objects
	~Car(){
		cout<<"Destructing car "<<name<<endl;
	}
};

int main() {
	Car d(2000,110,"BMW");
	d.print();

	Car c = d;
	c.setPrice(4000);
	c.name[0] = 'A';
	c.print();

	Car *e = new Car(1000,200,"Ferari");//dynamic object

	e->print();//to print dynamic object

	delete e;//to destruct dynamic object 

	//object is destructed from last created to first created object
}













