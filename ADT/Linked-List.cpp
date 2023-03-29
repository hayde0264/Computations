#include <cstddef>
#include <iostream>

template<class T> 
struct Node { 
	T data; 
	Node<T>* next; 
}; 

template<class T> 
class LinkedList { 
	public:
		Node<T>* head; 
		Node<T>* tail; 

		// initializer 
		LinkedList<T>() { 
			head = NULL;
			tail = NULL; 
		} 

		// methods 
		void add(T data); 
		T get(int index); 
}; 

