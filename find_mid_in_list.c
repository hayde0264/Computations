#include <stdio.h> 
#include <stdlib.h> 

struct Node 
{ 
	int data; 
	struct Node* next; 
};  

void find_mid(struct Node* head) 
{ 
	struct Node* slow = head; 
	struct Node* fast = head;  
	if (head != NULL) 
	{ 
		while (fast != NULL && fast->next != NULL) 
		{ 
			fast = fast->next->next; 
			slow = slow->next; 
		}  
		printf("The middle element is %d\n", slow->data); 
	} 
} 

void push(struct Node** head_ref, int element) 
{
	// create node 
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));  

	// insert node 
	new_node->data = element; 

	// link old list off new node 
	new_node->next = (*head_ref); 

	// move head to point to new node 
	(*head_ref) = new_node; 
} 

void print(struct Node* ptr) 
{ 
	while (ptr != NULL) 
	{ 
		printf("%d->", ptr->data); 
		ptr = ptr->next; 
	}
	printf("NULL\n"); 
}  

int main() 
{ 
	struct Node* head = NULL; 
	int i; 

	for (i = 5; i > 0; i--) 
	{ 
		push(&head, i); 
		print(head); 
		find_mid(head); 
	} 

	return 0; 
} 


