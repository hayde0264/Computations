#ifndef STACK 
#define STACK 

class Stack 
{ 
	int *arr; 
	int top; 
	int capacity; 
public:
	Stack(int size = 10);
	~Stack();  

	void push(int); 

	int pop(); 
	int peek(); 
	int size(); 

	bool isEmpty(); 
	bool isFull();  
}; 

#endif
