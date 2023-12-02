#include <iostream>

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void append(int data)
    {
        if (head == nullptr)
        {
            head = new Node(data);
        }
        else
        {
            appendRecursive(data, head);
        }
    }

    void appendRecursive(int data, Node *current)
    {
        if (current->next == nullptr)
        {
            current->next = new Node(data);
        }
        else
        {
            appendRecursive(data, current->next);
        }
    }

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

    int length()
    {
        return lengthRecursive(head);
    }

    int lengthRecursive(Node *current)
    {
        if (current == nullptr)
        {
            return 0;
        }
        return 1 + lengthRecursive(current->next);
    }

    bool search(int value)
    {
        return searchRecursive(value, head);
    }

    bool searchRecursive(int value, Node *current)
    {
        if (current == nullptr)
        {
            return false;
        }
        if (current->data == value)
        {
            return true;
        }
        return searchRecursive(value, current->next);
    }

    void remove(int value)
    {
        head = removeRecursive(value, head);
    }

    Node *removeRecursive(int value, Node *current)
    {
        if (current == nullptr)
        {
            return nullptr;
        }
        if (current->data == value)
        {
            Node *temp = current->next;
            delete current;
            return temp;
        }
        current->next = removeRecursive(value, current->next);
        return current;
    }

    // Add other methods here based on your requirements
};

int main()
{
    LinkedList my_list;
    my_list.append(1);
    my_list.append(2);
    my_list.append(3);
    my_list.append(4);

    my_list.display();

    std::cout << "Length of the list: " << my_list.length() << std::endl;
    std::cout << "Is 3 in the list? " << (my_list.search(3) ? "Yes" : "No") << std::endl;

    my_list.remove(2);
    my_list.display();

    return 0;
}
