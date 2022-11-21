#include<iostream>
using namespace std;

class Car {
private:
	float price;

public:
	char name[20];
	int model_no;

	Car(float p,int m,char *n) {
		price = p;
		model_no = m;
		strcpy(name,n);
	}

	/*Car(Car &x) {
		cout<<"I'm inside\n";
		price = x.price;
		model_no = x.model_no;
		strcpy(name,x.name);
	}
	*/
	void print() {
		cout<<"Name: "<<name<<endl;
		cout<<"Model number: "<<model_no<<endl;
		cout<<"Price: "<<price<<endl;
	}

};

int main() {
	Car d(2000,1350,"BMW");
	d.print();
	Car e(d);
	e.print();

	//or we can do Car e = d

	return 0;
}