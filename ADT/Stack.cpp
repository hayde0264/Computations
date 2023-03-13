#include <cstdlib>
#include <iostream>
#include "include/Stack.h" 

using std::cout;

// Initalize 
Stack::Stack(int size) 
{ 
	arr = new int[size]; 
	capacity = size; 
	top = -1; 
} 
// Destruct 
Stack::~Stack() 
{ 
	delete [] arr; 
} 
// Add element  
void Stack::push(int i) 
{ 
	if(isFull()) 
	{ 
		cout << "Overflow...\nProgram will be terminated..." << '\n'; 
		exit(EXIT_FAILURE); 
	} 
	cout << "Inserting element -> " << i << '\n'; 
	arr[++top] = i; 
}
// Release topmost element 
int Stack::pop() 
{ 
	if(isEmpty()) 
	{ 
		cout << "Underflow...\nProgram will be terminated..." << '\n'; 
		exit(EXIT_FAILURE); 
	} 
	cout << "Removing element -> " << peek() << '\n'; 
	return arr[top--]; 
} 
// Check topmost element  
int Stack::peek()
{ 
	if(!isEmpty()) 
	{ 
		return arr[top]; 
	} 
	else 
	{ 
		exit(EXIT_FAILURE); 
	} 
} 
// Check size 
int Stack::size() 
{ 
	return top + 1; 
} 
bool Stack::isEmpty() 
{ 
	return top == -1; 
} 
bool Stack::isFull() 
{ 
	return top == capacity - 1; 
}
int main() 
{ 
	Stack s(10); 
	
	s.push(1); 
	s.push(2);
	s.push(3); 
	s.push(4); 
	cout << '\n'; 

	cout << "The topmost element is -> " << s.peek() << '\n'; 
	cout << "The Stacks size is -> " << s.size() << '\n'; 
	cout << '\n'; 

	// first pop 
	s.pop(); 

	cout << "The tompost element is -> " << s.peek() << '\n'; 
	cout << "The Stacks size is -> " << s.size() << '\n'; 
	cout << '\n'; 

	// second pop 
	s.pop(); 

	cout << "The topmost element is -> " << s.peek() << '\n'; 
	cout << "The Stacks size is -> " << s.size() << '\n'; 
	cout << '\n'; 

	// pushing again 
	s.push(8); 
	cout << "Now the topmost element is -> " << s.peek() << '\n'; 
	cout << "Now the Stacks size is -> " << s.size() << '\n'; 
	cout << '\n'; 

	// check stack status 
	cout << "Is the Stack empty or not?\n"; 
	s.isEmpty() ? cout << "The stack is empty....\n" : cout << "The stack is not empty....\n"; 
} 
