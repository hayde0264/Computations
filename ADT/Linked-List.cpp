#include <stdio.h>

#include "include/Node.h"

class LinkedList {
 public:
  Node* head = NULL;
  void insert(int i) {
    Node* temp = new Node();
    temp->data = i;
    temp->next = head;
    head = temp;
  }
  void print() {
    Node* temp = head;
    printf("List is: ");
    while (temp != NULL) {
      printf("%d, ", temp->data);
      temp = temp->next;
    }
    printf("\n");
  }
};
int main() {
  auto LL = new LinkedList;
  printf("How many numbers?\n");
  int len, insert;
  scanf("%d", &len);
  for (int i = 0; i < len; i++) {
    printf("Enter the next list element: \n");
    scanf("%d", &insert);
    LL->insert(insert);
    LL->print();
  }

  delete LL;
  return 0;
}
