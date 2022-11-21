#include<iostream>
#include "easyAccess_hashtable.h"
#include<cstring>
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

	int *price = price_menu.search("Coke");
	if(price == NULL) {
		cout<<"Not Found!\n";
	} 
	else {
		cout<<"Price : "<<*price<<endl;
	}
	//easy access operations: 
	//insert
	//This code is not working as it is not allocating new items using easy access 
	//dont know what is the problem(segmentation fault is coming)
	/*price_menu["Dosa"] = 60;
	price_menu.print();
	//update
	price_menu["Dosa"] += 10;

	//search and display
	cout<<"Price of Dosa : "<<price_menu["Dosa"]<<endl;*/

	return 0;
}