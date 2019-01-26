//1_Hash.h
#ifndef HASH_1_H
#define HASH_1_H

#include <list>
#include <string>
#include <vector>

class HashTable{

	public:
		HashTable(int size);
		void insert(std::string ip); //insert 
		void remove(std::string ip); //delete 
		bool exists(std::string ip); //check if the ip address exists
		void print(); //stat
		void setcoef(int a1,int a2,int a3,int a4); //set coeffeicent of hash function 
 
	private:
		std::vector<std::list<std::string> > table ;
		int hash(std::string name); //hash function that will output the index of the function;
		int size; //the size of the hashtable
		int *a; //coeff
		int sucins; //successfully inserted
		int sucdel; //successfully deleted


};

#endif 