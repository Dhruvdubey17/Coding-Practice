#include<iostream>
#include<cstring>
#include "hashtable.h"
using namespace std;

int main() {
	HashTable<int> price_menu;

	price_menu.insert("Burger",120);
	price_menu.insert("Pepsi",20);
	price_menu.insert("Pizza",150);
	price_menu.insert("BurgerPizza",150);
	price_menu.insert("Noodles",25);
	price_menu.insert("Coke",40);


	price_menu.print();

	int *price = price_menu.search("Cok");
	if(price == NULL) {
		cout<<"Not Found!\n";
	} 
	else {
		cout<<"Price : "<<*price<<endl;
	}

	return 0;
}