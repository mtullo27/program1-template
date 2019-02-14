#include "List.h"
#include <cstdlib>

List::List(){
	this->head=NULL;
	this->tail=NULL;
	this->list=new Node*[this->listSize];
}

List::List(){
	delete[] list;
}

void List::insert(int index, Planet * p){
	if(index>=listSize){
		this->list[listSize]=p;
		listSize++;
	}
	else{
		this->list[index]=p;
		this->list[index-1]->next=*p;
		this->list[index+1]->prev=*p;
	}
}

Planet* List::read(int index){
	if(index>=listSize){return NULL;}
	else{
		return this->list[index];
	}
}

bool List::remove(int index){
	if(index>=listSize){return false;}
	else{
		this->list[index+1]->prev=*this->list[index-1];
		this->list[index-1]->next=*this->list[index+1];
		delete this->list[index];
		listSize--;
		return true;
	}
		
}

unsigned List::size(){
	return listSize;
}
