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
	//to use assignment operator, this needs to be done
	void operator=(Car &x) {
		price = x.price;
		model_no = x.model_no;
		name = new char[strlen(x.name)+1];
		strcpy(name,x.name);
	}

	void setPrice(float p) {
		price = p;
	}

	void print() {
		cout<<"Name: "<<name<<endl;
		cout<<"Model number: "<<model_no<<endl;
		cout<<"Price: "<<price<<endl;
	}
};

int main() {
	Car d(2000,110,"BMW");
	d.print();

	//Car c = d; is changed to next to lines i.e. assignment
	Car c;
	c = d;
	c.setPrice(4000);
	c.name[0] = 'A';
	c.print();
}













