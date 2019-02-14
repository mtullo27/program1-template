#include "Vector.h"
#include <stdio>

using namespace std;
using namespace Vector;

Vector(){
	this->list = new Planet*[this->length];
}
void insert(int index, Planet *p){
	if(index >= this->length){
		this->length = index+1;
		this->list[index] = p;
	}
	else{
		int temp = this->length;
		this->length = temp+1;
		int tempA = new Planet*[this->length];
		bool added = false;
		for(int i = 0; i<temp; i++){
			if(i == index&&!added){
				tempA[i] = p;
				added = true;
				i--;
			}
			else if(i != index && !added)
				tempA[i] = this->list[i];
			else
				tempA[i+1] = this->list[i];
		}
		delete []this->list;
		this->list = tempA;
	}	
}
Planet* read(int index){
	for(int i = 0; i<this->length; i++){
		if(i == index)
			return this->list[i];
	}
	return NULL;
}
bool remove(int index){
	if(index < 0 || index >= this->length)
		return false;
	int temp = this->length;
	this->length = temp+1;
	int tempA = new Planet*[this->length];
	bool removed = false;
	for(int i = 0; i<temp; i++){
		if(i == index&&!added){
			removed = true;
			i--;
		}
		else if(i != index && !added)
			tempA[i] = this->list[i];
		else
			tempA[i-1] = this->list[i];
	}
	delete []this->list;
	this->list = tempA;	
	return true;
}
unsigned int size(){
	return (unsigned int)this->length;
}

