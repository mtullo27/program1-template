#ifndef LISTH_EG
#define LISTH_EG

#include <cstdlib>

class Node{
	private:
		Node * next, * prev;

}

class List{
	private:
		Node ** list;
		unsigned listSize=0;
		Node * head;
		Node * tail;
	public:
		void insert(int, Planet *);
		List();
		~List();
		Planet* read(int);
		bool remove(int);
		unsigned size();
}

#endif
