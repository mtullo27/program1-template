#ifndef VECTOR_H
#define VECTOR_H

class Vector{
	private:
		int length;
		Planet **list;	
	public:
		Vector();
		~Vector()
		void insert(int, Planet);
		Planet* read(int);
		bool remove(int);
		unsigned int size();
}

#endif VECTOR_H

