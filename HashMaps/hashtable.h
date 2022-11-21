#include<iostream>
#include<cstring>
using namespace std;

template<typename T>
class Node {

public:
	string key;
	T value;
	Node<T>*next;

	Node(string key,T val) {
		this->key = key;
		value = val;
		next = NULL;
	}

	~Node() {
		if(next!=NULL) {
			delete next;
		}
	}
};


template<typename T>
class HashTable {
	Node<T>** table;
	int current_size;
	int table_size;
	//to find the index
	int hashFnc(string key) {
		int idx = 0;
		int p = 1;

		for(int i=0;i<key.length();i++) {
			idx = idx + (key[i]*p)%table_size;
			idx = idx%table_size;
			p = (p*27)%table_size;
		}

		return idx;
	}

	void rehash() {

		Node<T>**old_table = table;
		int old_table_size = table_size;
		table_size = 2*table_size;
		table = new Node<T>*[table_size];

		for(int i=0;i<table_size;i++) {
			table[i] = NULL;
		} 
		current_size = 0;

		//shifting of elements from old table to new one
		for(int i=0;i<old_table_size;i++) {
			Node<T>*temp = old_table[i];
			while(temp!=NULL) {
				insert(temp->key,temp->value);
				temp=temp->next;
			}
			//deleting the node whose data has been copied
			//will be deleted recursively with help of destructor created 
			if(old_table[i]!=NULL) {
				delete old_table[i];
			}
		}
		delete [] old_table;
	}

public:
	HashTable(int ts=7) {
		table_size = ts;
		table = new Node<T>*[table_size];
		current_size = 0;

		for(int i=0;i<table_size;i++) {
			table[i] = NULL;
		}
	}

	void insert(string key,T value) {
		int idx = hashFnc(key);
		Node<T>*n = new Node<T>(key,value);
		//inserting at head of the linked list(or we can insert at tail too)
		n->next = table[idx];
		table[idx] = n;
		current_size++;

		//rehash
		float load_factor = current_size/(1.0*table_size);
		if(load_factor>0.75){
			rehash();
		}
	}

	void print() {
		for(int i=0;i<table_size;i++) {
			cout<<"Bucket "<<i<<" -->";
			Node<T>*temp = table[i];
			while(temp!=NULL) {
				cout<<temp->key<<"-->";
				temp = temp->next;
			}
			cout<<endl;
		}
	}

	T* search(string key) {
		int idx = hashFnc(key);
		Node<T>*temp = table[idx];
		if(table[idx] == NULL){
			return NULL;
		}
		while(table!=NULL) {
			if(temp->key == key) {
				return &temp->value;
			}
			temp = temp->next;
		}
		return NULL;//to return null return type of the fucn is T*
	}

};

















