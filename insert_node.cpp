#include <iostream>

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
  private:
    Node *head, *tail;

  public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int n)
    {
        Node *new_node = new Node();
        new_node->data = n;
        new_node->next = head;
        head = new_node;
    }
    void print_head()
    {
        while (head != NULL)
        {
            std::cout << head->data << " ";
            head = head->next;
        }
    }
};

int main()
{
    LinkedList ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.print_head();

    return 0;
}
